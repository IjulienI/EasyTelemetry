// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EasyTelemetryRuntime/Structures/EasyTelemetryStuct.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

#include "EasyTelemetrySubsystem.generated.h"


UCLASS()
class EASYTELEMETRYRUNTIME_API UEasyTelemetrySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS);
	void OnWorldBeginPlay();

	void LogPlayersLocation();

	void CreateDataJson();

	UPROPERTY()
	UWorld* mWorld;

	FTimerHandle PlayerLocationTimer;

	UPROPERTY()
	TArray<ACharacter*> Characters;

	UPROPERTY()
	TArray<FPlayerLocation> LocationsLog;

	UPROPERTY()
	TArray<FMechanic> MechanicsLog;

public:
	void TrackCharacter(ACharacter* Character);

	void TrackMechanic(ACharacter* Character, FString Mechanic, FColor Color);
};
