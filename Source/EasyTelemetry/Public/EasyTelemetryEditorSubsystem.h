// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "../Structures/EasyTelemetryStuct.h"
#include "EasyTelemetryEditorSubsystem.generated.h"

class UET_TelemetryWidget;
class UEditorUtilityWidget;

UCLASS()
class EASYTELEMETRY_API UEasyTelemetryEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void RefreshRender();
	void GenerateHeatMaps();	

	UPROPERTY()
	TArray<FTrack> Tracks;

	UPROPERTY()
	TMap<FString, bool> ActiveMechanics;

	bool bCurrentlyDrawTrajectory;

	float mTime;
	float mMaxTime;

public:
	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Data")
	void LoadData(UET_TelemetryWidget* Widget);

	void UpdateMechanicState(FString Mechanic, bool bState);	

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EasyTelemetry|Tracking")
	TArray<FTrack> GetTracks()
	{
		return Tracks;
	}

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void Draw();

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void DrawTrajectory(float Time);
	
	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void FlushTrajectory();

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void DrawMecanics(float Time);

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void SetTime(float Time);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EasyTelemetry|Tracking")
	float GetMaxTime();
};
