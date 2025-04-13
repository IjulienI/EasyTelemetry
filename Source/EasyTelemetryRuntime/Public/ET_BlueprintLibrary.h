// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "ET_BlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EASYTELEMETRYRUNTIME_API UET_BlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="EasyTelemetry|Tracking", meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, DisplayName="Track Character", Keyword="TrackCharacter", ToolTip="Starts tracking the specified character's location over time.\nLogged data will be saved automatically. \n\n Tips : You can modify the logIntervale from ProjectSettings -> EasyTelemetry -> LogIntervale"))
	static void TrackCharacter(const UObject* WorldContextObject, ACharacter* Character);

	UFUNCTION(BlueprintCallable, Category="EasyTelemetry|Tracking", meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, DisplayName="Track Mechanic", Keyword="TrackMechanic", ToolTip="Logs a gameplay mechanic event for the specified character with a visual color for editor visualization."))
	static void TrackMechanic(const UObject* WorldContextObject, ACharacter* Character, FString Mechanic, FLinearColor Color);
};
