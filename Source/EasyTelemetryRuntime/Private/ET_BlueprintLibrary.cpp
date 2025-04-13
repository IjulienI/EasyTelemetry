// Fill out your copyright notice in the Description page of Project Settings.


#include "ET_BlueprintLibrary.h"
#include "Engine/GameInstance.h"

#include "EasyTelemetrySubsystem.h"


void UET_BlueprintLibrary::TrackCharacter(const UObject* WorldContextObject, ACharacter* Character)
{
	UWorld* World = WorldContextObject->GetWorld();
	UGameInstance* GameInstance = World->GetGameInstance();

	UEasyTelemetrySubsystem* Subsystem = GameInstance->GetSubsystem<UEasyTelemetrySubsystem>();

	if (Character == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Character is null [Track Character]"));
		return;
	}
	Subsystem->TrackCharacter(Character);
}

void UET_BlueprintLibrary::TrackMechanic(const UObject* WorldContextObject, ACharacter* Character, FString Mechanic, FLinearColor Color)
{
	UWorld* World = WorldContextObject->GetWorld();
	UGameInstance* GameInstance = World->GetGameInstance();

	UEasyTelemetrySubsystem* Subsystem = GameInstance->GetSubsystem<UEasyTelemetrySubsystem>();

	if (Mechanic.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Mechanic have no name ! [TrackMechanic]"));
		return;
	}
	
	if (Character == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Character is null ! (Mechanic name : %s) [Track Mechanic]"), *Mechanic);
		return;
	}
	Subsystem->TrackMechanic(Character, Mechanic, Color.ToFColor(true));
}
