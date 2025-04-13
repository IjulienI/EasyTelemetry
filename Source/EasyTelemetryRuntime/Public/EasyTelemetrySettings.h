// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EasyTelemetrySettings.generated.h"

UCLASS(Config=Game, defaultconfig, meta=(DisplayName="Easy Telemetry"))
class EASYTELEMETRYRUNTIME_API UEasyTelemetrySettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	UEasyTelemetrySettings(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Config, EditAnywhere, Category="EasyTelemetry|Settings",meta=(ToolTip="Time in seconds between each player position recording."))
	float LogInterval = 0.5f;

	UPROPERTY(Config, EditAnywhere, Category="EasyTelemetry|Heat", meta=(ToolTip="Low density Heat visualization"))
	FLinearColor ColdColor = FLinearColor(0.2f, 0.6f, 1.f);

	UPROPERTY(Config, EditAnywhere, Category="EasyTelemetry|Heat", meta=(ToolTip="High density Heat visualization"))
	FLinearColor HotColor = FLinearColor(1.f, 0.f, 0.f);

	UPROPERTY(Config, EditAnywhere, Category="EasyTelemetry|Heat|Trajectory")
	float TrajectoryRadius = 100.0f;

	UPROPERTY(Config, EditAnywhere, Category="EasyTelemetry|Heat|Trajectory")
	float TrajectorySensitivity = 50.0f;

	UPROPERTY(Config, EditAnywhere, Category="EasyTelemetry|Heat|Mechanic")
	float MechanicRadius = 50.0f;

	UPROPERTY(Config, EditAnywhere, Category="EasyTelemetry|Heat|Mechanic")
	float MechanicSensitivity = 50.0f;
};
