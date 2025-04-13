// Fill out your copyright notice in the Description page of Project Settings.


#include "ET_BlueprintLibrary.h"
#include "Engine/GameInstance.h"

#include "EasyTelemetrySubsystem.h"


void UET_BlueprintLibrary::TrackCharacter(const UObject* WorldContextObject, ACharacter* Character)
{
	UWorld* World = WorldContextObject->GetWorld();
	UGameInstance* GameInstance = World->GetGameInstance();

	UEasyTelemetrySubsystem* Subsystem = GameInstance->GetSubsystem<UEasyTelemetrySubsystem>();

	Subsystem->TrackCharacter(Character);
}

void UET_BlueprintLibrary::TrackMechanic(const UObject* WorldContextObject, ACharacter* Character, FString Mechanic, FLinearColor Color)
{
	UWorld* World = WorldContextObject->GetWorld();
	UGameInstance* GameInstance = World->GetGameInstance();

	UEasyTelemetrySubsystem* Subsystem = GameInstance->GetSubsystem<UEasyTelemetrySubsystem>();

	Subsystem->TrackMechanic(Character, Mechanic, Color.ToFColor(false));
}
