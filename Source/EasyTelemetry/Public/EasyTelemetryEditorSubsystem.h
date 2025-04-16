// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "../Structures/EasyTelemetryStuct.h"
#include "ETWidgets/ET_TelemetryWidget.h"
#include "Math/Color.h"

#include "EasyTelemetryEditorSubsystem.generated.h"


UCLASS()
class EASYTELEMETRY_API UEasyTelemetryEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void RefreshRender();
	void PregenHeatMap();

	UPROPERTY()
	TArray<FTrack> Tracks;

	UPROPERTY()
	TMap<FString, bool> ActiveMechanics;

	bool bCurrentlyDrawTrajectory;

	float mTime;
	float mMaxTime;

	bool bDraw;
	bool bDrawHeat;
	bool bPregenHeat;

	int mDrawType;

	TMap<int, FNormalizeDistance> TrajectoryHeatMap;
	TMap<int, FNormalizeDistance> MechanicHeatMap;
	
	FLinearColor ColdColor = FLinearColor(0.2f, 0.6f, 1.f);
	FLinearColor HotColor = FLinearColor(1.f, 0.f, 0.f);

	float TrajectoryRadius;
	float TrajectorySensitivity;
	
	float MechanicRadius;
	float MechanicSensitivity;

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
	void RefreshSettings();

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

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void SetDrawType(int DrawType);

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void SetDraw(bool pDraw);

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Tracking")
	void SetDrawHeat(bool pDrawHeat);

	UFUNCTION(BlueprintCallable, Category = "EasyTelemetry|Heat")
	void SetPregenHeat(bool _bPregenHeat);
};
