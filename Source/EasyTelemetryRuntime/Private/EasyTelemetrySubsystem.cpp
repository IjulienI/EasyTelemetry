// Fill out your copyright notice in the Description page of Project Settings.


#include "EasyTelemetrySubsystem.h"

#include "EasyTelemetrySettings.h"
#include "EasyTelemetryRuntime/Structures/EasyTelemetryStuct.h"
#include "GameFramework/Character.h"

void UEasyTelemetrySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogTemp, Display, TEXT("EasyTelemetrySubsystem::Initialize"));
	
	//Delegate on world Initialization
	FWorldDelegates::OnPostWorldInitialization.AddUObject(this, &UEasyTelemetrySubsystem::HandlePostWorldInit);	
}

void UEasyTelemetrySubsystem::Deinitialize()
{
	Super::Deinitialize();

	UE_LOG(LogTemp, Display, TEXT("EasyTelemetrySubsystem::DeInitialize"));
	CreateDataJson();
}

void UEasyTelemetrySubsystem::HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS)
{
	mWorld = World;
	if (mWorld && mWorld->IsGameWorld())
	{
		World->OnWorldBeginPlay.AddUObject(this, &UEasyTelemetrySubsystem::OnWorldBeginPlay);
	}
	if (LocationsLog.Num() > 0 || MechanicsLog.Num() > 0)
	{
		CreateDataJson();
	}
}

void UEasyTelemetrySubsystem::OnWorldBeginPlay()
{
	float Intervale = GetDefault<UEasyTelemetrySettings>()->LogInterval;
	mWorld->GetTimerManager().SetTimer(PlayerLocationTimer, this, &UEasyTelemetrySubsystem::LogPlayersLocation, Intervale, true);
}

void UEasyTelemetrySubsystem::LogPlayersLocation()
{
	for (ACharacter* Character : Characters)
	{
		FPlayerLocation CharacterLocationLog;
		CharacterLocationLog.Location = Character->GetActorLocation();
		CharacterLocationLog.TimeStemp = mWorld->GetTimeSeconds();

		DrawDebugSphere(mWorld, CharacterLocationLog.Location, 25.0f, 6, FColor::Red, false ,10.0f);
		DrawDebugString(mWorld, CharacterLocationLog.Location, FString::SanitizeFloat(CharacterLocationLog.TimeStemp), 0 ,FColor::Cyan, 10.0f, false, 1 );

		LocationsLog.Add(CharacterLocationLog);
	}
}

void UEasyTelemetrySubsystem::CreateDataJson()
{
	FString JsonOutput;
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	
	TArray<TSharedPtr<FJsonValue>> PlayerLocationArray;
	TArray<TSharedPtr<FJsonValue>> MechanicsArray;

	for (const FPlayerLocation& LocationLog : LocationsLog)
	{
		TSharedPtr<FJsonObject> PlayerLocationJsonObject = MakeShareable(new FJsonObject());

		PlayerLocationJsonObject->SetStringField(TEXT("Location"), LocationLog.Location.ToString());
		PlayerLocationJsonObject->SetNumberField(TEXT("TimeStemp"), LocationLog.TimeStemp);

		PlayerLocationArray.Add(MakeShareable(new FJsonValueObject(PlayerLocationJsonObject)));
	}

	for (const FMechanic& MechanicLog : MechanicsLog)
	{
		TSharedPtr<FJsonObject> MechanicJsonObject = MakeShareable(new FJsonObject());

		MechanicJsonObject->SetStringField(TEXT("Mechanic"), MechanicLog.Mechanic);
		MechanicJsonObject->SetStringField(TEXT("Location"), MechanicLog.Location.ToString());
		MechanicJsonObject->SetNumberField(TEXT("TimeStemp"), MechanicLog.TimeStemp);
		MechanicJsonObject->SetStringField(TEXT("Color"), MechanicLog.Color.ToString());

		MechanicsArray.Add(MakeShareable(new FJsonValueObject(MechanicJsonObject)));
	}

	JsonObject->SetArrayField(TEXT("PlayerLocations"), PlayerLocationArray);
	JsonObject->SetArrayField(TEXT("Mechanics"), MechanicsArray);

	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonOutput);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	FString JsonFolder;

#if WITH_EDITOR
	JsonFolder = FPaths::ProjectPluginsDir() + TEXT("EasyTelemetry/Data/");
	
#else
	JsonFolder = FPaths::ProjectSavedDir() + TEXT("Data/");
	
#endif

	IFileManager::Get().MakeDirectory(*JsonFolder, true);

	FString DateTimeString = FDateTime::Now().ToString(TEXT("%Y-%m-%d_%H-%M-%S"));

	FString FileName = DateTimeString + FString::Printf(TEXT("_%s.json"), *mWorld->GetMapName());
	
	FString FilePath = JsonFolder + FileName;

	FFileHelper::SaveStringToFile(JsonOutput, *FilePath);

	Characters.Empty();
	LocationsLog.Empty();
	MechanicsLog.Empty();
}

void UEasyTelemetrySubsystem::TrackCharacter(ACharacter* Character)
{
	Characters.Add(Character);
}

void UEasyTelemetrySubsystem::TrackMechanic(ACharacter* Character, FString Mechanic, FColor Color)
{
	FMechanic MechanicLog;
	MechanicLog.Mechanic = Mechanic;
	MechanicLog.Location = Character->GetActorLocation();
	MechanicLog.TimeStemp = mWorld->GetTimeSeconds();
	MechanicLog.Color = Color;
	
	DrawDebugSphere(mWorld, MechanicLog.Location, 15.0f, 6, FColor::Green, false ,10.0f);
	DrawDebugString(mWorld, MechanicLog.Location, FString::SanitizeFloat(MechanicLog.TimeStemp), 0 ,FColor::Cyan, 10.0f, false, 1 );

	MechanicsLog.Add(MechanicLog);
	LogPlayersLocation();
}
