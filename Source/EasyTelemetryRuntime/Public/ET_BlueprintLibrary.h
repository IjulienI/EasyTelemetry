// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ET_BlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EASYTELEMETRYRUNTIME_API UET_BlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="EasyTelemetry|Tracking", meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, DisplayName="Track Character", Keyword="TrackCharacter"))
	static void TrackCharacter(const UObject* WorldContextObject, ACharacter* Character);

	UFUNCTION(BlueprintCallable, Category="EasyTelemetry|Tracking", meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, DisplayName="Track Mechanic", Keyword="TrackMechanic"))
	static void TrackMechanic(const UObject* WorldContextObject, ACharacter* Character, FString Mechanic, FLinearColor Color);
};
