// Fill out your copyright notice in the Description page of Project Settings.


#include "ET_BlueprintLibrary.h"

#include "EasyTelemetrySubsystem.h"
#include "VectorTypes.h"

void UET_BlueprintLibrary::TrackCharacter(const UObject* WorldContextObject, ACharacter* Character)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	UGameInstance* GameInstance = World->GetGameInstance();

	UEasyTelemetrySubsystem* Subsystem = GameInstance->GetSubsystem<UEasyTelemetrySubsystem>();

	Subsystem->TrackCharacter(Character);
}

void UET_BlueprintLibrary::TrackMechanic(const UObject* WorldContextObject, ACharacter* Character, FString Mechanic, FLinearColor Color)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	UGameInstance* GameInstance = World->GetGameInstance();

	UEasyTelemetrySubsystem* Subsystem = GameInstance->GetSubsystem<UEasyTelemetrySubsystem>();

	Subsystem->TrackMechanic(Character, Mechanic, Color.ToFColor(false));
}
