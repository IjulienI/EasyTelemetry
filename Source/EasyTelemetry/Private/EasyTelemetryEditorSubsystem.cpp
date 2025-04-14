// Fill out your copyright notice in the Description page of Project Settings.


#include "EasyTelemetryEditorSubsystem.h"

#include "EasyTelemetrySettings.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Misc/Paths.h"
#include "EasyTelemetryRuntime/Structures/EasyTelemetryStuct.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Engine/Engine.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

TSharedPtr<SNotificationItem> NotificationItem;

void UEasyTelemetryEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	mTime = -1;
	mMaxTime = 0;
	mDrawType = DrawType::Trajectory;
	bDraw = false;
	bDrawHeat = false;

	UE_LOG(LogTemp, Display, TEXT("EasyTelemetryEditorSubsystem::Initialize"));
}

void UEasyTelemetryEditorSubsystem::Deinitialize()
{
	Super::Deinitialize();

	UE_LOG(LogTemp, Display, TEXT("EasyTelemetryEditorSubsystem::DeInitialize"));
}

void UEasyTelemetryEditorSubsystem::UpdateMechanicState(FString Mechanic, bool bState)
{
	if (ActiveMechanics.Contains(Mechanic))
	{
		ActiveMechanics[Mechanic] = bState;
	}
	
	RefreshRender();
}

void UEasyTelemetryEditorSubsystem::RefreshRender()
{
	FlushTrajectory();
	Draw();
}

void UEasyTelemetryEditorSubsystem::RefreshSettings()
{
	ColdColor = GetDefault<UEasyTelemetrySettings>()->ColdColor;
	HotColor = GetDefault<UEasyTelemetrySettings>()->HotColor;
	TrajectoryRadius = GetDefault<UEasyTelemetrySettings>()->TrajectoryRadius;
	TrajectorySensitivity = GetDefault<UEasyTelemetrySettings>()->TrajectorySensitivity;
	MechanicRadius = GetDefault<UEasyTelemetrySettings>()->MechanicRadius;
	MechanicSensitivity	= GetDefault<UEasyTelemetrySettings>()->MechanicSensitivity;

	Draw();
}

void UEasyTelemetryEditorSubsystem::LoadData(UET_TelemetryWidget* Widget)
{
	//Create Notification
	FNotificationInfo Info(FText::FromString("Loading Data..."));
	
	Info.FadeInDuration = 0.1f;
	Info.FadeOutDuration = 0.1f;
	Info.ExpireDuration = 5.0f;
	Info.bFireAndForget = false;
	Info.bUseThrobber = true;

	NotificationItem = FSlateNotificationManager::Get().AddNotification(Info);
	if (NotificationItem.IsValid())
	{
		NotificationItem->SetCompletionState(SNotificationItem::CS_Pending);
	}

	//Clear Log
	Tracks.Empty();

	//Reset max time
	mMaxTime = 0;

	//Load Json
	FString JsonPathFolder = FPaths::ProjectPluginsDir() + TEXT("EasyTelemetry/Data/");
	IFileManager& FileManager = IFileManager::Get();

	TArray<FString> JsonFiles;
	FileManager.FindFiles(JsonFiles, *JsonPathFolder, TEXT("*.json"));

	//If no file, Notifcation failed
	if (JsonFiles.Num() == 0)
	{
		if (NotificationItem.IsValid())
		{
			NotificationItem->SetText(FText::FromString("Data folder is empty"));
			NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
			NotificationItem->ExpireAndFadeout();
			NotificationItem = nullptr;
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Found %d JSON files"), JsonFiles.Num());
	for (const FString& FileName : JsonFiles)
	{
		UE_LOG(LogTemp, Log, TEXT("Found file: %s"), *FileName);
		FTrack CurrentTrack;
		CurrentTrack.Name = FileName;
		FString FullPath = JsonPathFolder + FileName;
		FString FileContent;

		if (FFileHelper::LoadFileToString(FileContent, *FullPath))
		{
			TSharedPtr<FJsonObject> JsonObject;
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(FileContent);

			if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
			{
				for (auto& LogFile : JsonObject->Values)
				{										
					const TArray<TSharedPtr<FJsonValue>>* PlayerLocationsArray;
					
					if (JsonObject->TryGetArrayField(TEXT("PlayerLocations"), PlayerLocationsArray))
					{
						for (auto& Entry : *PlayerLocationsArray)
						{
							const TSharedPtr<FJsonObject>* EntryObject;
							if (Entry->TryGetObject(EntryObject))
							{
								FPlayerLocation TempPlayerLog;
								TempPlayerLog.Location.InitFromString((*EntryObject)->GetStringField(TEXT("Location")));
								TempPlayerLog.TimeStemp = (*EntryObject)->GetNumberField(TEXT("TimeStemp"));
								CurrentTrack.Locations.Add(TempPlayerLog);

								if (TempPlayerLog.TimeStemp > mMaxTime)
								{
									mMaxTime = TempPlayerLog.TimeStemp;
								}
							}
						}
					}

					const TArray<TSharedPtr<FJsonValue>>* MechanicsArray;

					if (JsonObject->TryGetArrayField(TEXT("Mechanics"), MechanicsArray))
					{
						UE_LOG(LogTemp, Log, TEXT("Found Mechanics array with %d elements"), MechanicsArray->Num());
						for (auto& Entry : *MechanicsArray)
						{
							const TSharedPtr<FJsonObject>* EntryObject;
							if (Entry->TryGetObject(EntryObject))
							{
								FMechanic TempMechanicsLog;
								TempMechanicsLog.Mechanic = (*EntryObject)->GetStringField(TEXT("Mechanic"));
								TempMechanicsLog.Location.InitFromString((*EntryObject)->GetStringField(TEXT("Location")));
								TempMechanicsLog.TimeStemp = (*EntryObject)->GetNumberField(TEXT("TimeStemp"));
								TempMechanicsLog.Color.InitFromString((*EntryObject)->GetStringField(TEXT("Color")));
								CurrentTrack.Mechanics.Add(TempMechanicsLog);
								ActiveMechanics.Add(TempMechanicsLog.Mechanic, false);
							}
						}
					}				
				}
			}
		}
		CurrentTrack.Color = FColor::MakeRandomColor();
		Tracks.Add(CurrentTrack);
	}

	Widget->DataLoaded();

	//Notification Finish
	if (NotificationItem.IsValid())
	{
		NotificationItem->SetText(FText::FromString("Loading Data Success !"));
		NotificationItem->SetCompletionState(SNotificationItem::CS_Success);
		NotificationItem->ExpireAndFadeout();
		NotificationItem = nullptr;
	}

	RefreshSettings();
}

void UEasyTelemetryEditorSubsystem::Draw()
{
	float LocalDraw = mTime;
	if (mTime == -1)
	{
		LocalDraw = mMaxTime;
	}

	FlushTrajectory();
	if (bDraw)
	{
		switch (mDrawType)
		{
			case DrawType::Both:
				DrawTrajectory(LocalDraw);
				DrawMecanics(LocalDraw);	
			break;
			
			case DrawType::Trajectory:
				DrawTrajectory(LocalDraw);
			break;
			
			case DrawType::Mechanic:
				DrawMecanics(LocalDraw);
			break;
			
			default:
				DrawTrajectory(LocalDraw);
				DrawMecanics(LocalDraw);
			break;
		}
	}
}

void UEasyTelemetryEditorSubsystem::DrawTrajectory(float Time)
{
	if (!GEditor || bCurrentlyDrawTrajectory) return;

	bCurrentlyDrawTrajectory = true;

	UWorld* World = GEditor->GetEditorWorldContext().World();
	for (FTrack CurrentTrack : Tracks)
	{
		if (!World || CurrentTrack.Locations.Num() < 2) return;

		bool FirstPass = true;
		FVector FirstLocation;
		
		for (int32 i = 0; i < CurrentTrack.Locations.Num() - 1; ++i)
		{
			float StartTime = CurrentTrack.Locations[i].TimeStemp;

			if (FirstPass)
			{
				FirstLocation = CurrentTrack.Locations[i].Location;
				FirstPass = false;
			}
			
			if (Time >= StartTime)
			{
				const FVector& Start = CurrentTrack.Locations[i].Location;
				FVector& End = CurrentTrack.Locations[i + 1].Location;

				if (End == FirstLocation) continue;

				if (CurrentTrack.Locations[i + 1].TimeStemp > Time)
				{
					float SegmentDuration = CurrentTrack.Locations[i + 1].TimeStemp - CurrentTrack.Locations[i].TimeStemp;
					float Alpha = (Time - CurrentTrack.Locations[i].TimeStemp) / SegmentDuration;
					End = FMath::Lerp(Start, End, Alpha);
				};
				int32 CountNearby = 0;
				FColor HeatColor;

				if (bDrawHeat)
				{
					for (const FTrack& OtherTrack : Tracks)
					{
						for (const FPlayerLocation& OtherLoc : OtherTrack.Locations)
						{
							if ( Time >= OtherLoc.TimeStemp && FVector::DistSquared(Start, OtherLoc.Location) <= TrajectoryRadius * TrajectoryRadius)
							{
								CountNearby++;
							}
						}
					}

					float NormalizedDensity = FMath::Clamp(static_cast<float>(CountNearby) / TrajectorySensitivity, 0.f, 1.f);
					FLinearColor InterpolatedColor = FLinearColor::LerpUsingHSV(ColdColor, HotColor, NormalizedDensity);
					HeatColor = InterpolatedColor.ToFColor(true);
				}
				
				DrawDebugDirectionalArrow(
					World,
					Start,
					End,
					100.0f,
					bDrawHeat ? HeatColor : CurrentTrack.Color,
					true,
					0.0f,
					0,
					2.0f
				);
			}
		}
	}
}

void UEasyTelemetryEditorSubsystem::FlushTrajectory()
{
	if (!GEditor) return;
	bCurrentlyDrawTrajectory = false;

	UWorld* World = GEditor->GetEditorWorldContext().World();
	if (World)
	{
		FlushPersistentDebugLines(World);
	}
}

void UEasyTelemetryEditorSubsystem::DrawMecanics(float Time)
{
	if (!GEditor) return;

	UWorld* World = GEditor->GetEditorWorldContext().World();
	for (FTrack CurrentTrack : Tracks)
	{
		for (FMechanic CurrentMechanic : CurrentTrack.Mechanics)
		{
			if (CurrentMechanic.TimeStemp < Time)
			{
				if (ActiveMechanics.Contains(CurrentMechanic.Mechanic) && ActiveMechanics[CurrentMechanic.Mechanic])
				{
					int32 CountNearby = 0;
					FColor HeatColor;
					
					if (bDrawHeat)
					{
						for (const FTrack& OtherTrack : Tracks)
						{
							for (const FMechanic & OtherLoc : OtherTrack.Mechanics)
							{
								if ( Time >= OtherLoc.TimeStemp && FVector::DistSquared(CurrentMechanic.Location, OtherLoc.Location) <= MechanicRadius * MechanicRadius)
								{
									CountNearby++;
								}
							}
						}

						float NormalizedDensity = FMath::Clamp(static_cast<float>(CountNearby) / MechanicSensitivity, 0.f, 1.f);
						
						FLinearColor InterpolatedColor = FLinearColor::LerpUsingHSV(ColdColor, HotColor, NormalizedDensity);
						HeatColor = InterpolatedColor.ToFColor(true);
					}
					
					DrawDebugBox(
						World,
						CurrentMechanic.Location,
						FVector(22.0f,22.0f,22.0f),
						bDrawHeat ? HeatColor : CurrentMechanic.Color,
						true,
						0.0f,
						0,
						2
					);
				}
			}
		}
	}
}

void UEasyTelemetryEditorSubsystem::SetTime(float Time)
{
	mTime = Time;
	Draw();
}

float UEasyTelemetryEditorSubsystem::GetMaxTime()
{
	return mMaxTime;
}

void UEasyTelemetryEditorSubsystem::SetDrawType(DrawType DrawType)
{
	mDrawType = DrawType;
	Draw();
}

void UEasyTelemetryEditorSubsystem::SetDraw(bool pDraw)
{
	bDraw = pDraw;
	Draw();
}

void UEasyTelemetryEditorSubsystem::SetDrawHeat(bool pDrawHeat)
{
	bDrawHeat = pDrawHeat;
	Draw();
}

