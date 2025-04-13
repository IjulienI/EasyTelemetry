// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EasyTelemetrySubsystem.generated.h"

struct FMechanic;
struct FPlayerLocation;

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
