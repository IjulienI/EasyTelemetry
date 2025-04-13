// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "ET_TelemetryWidget.generated.h"

/**
 * 
 */
UCLASS()
class EASYTELEMETRY_API UET_TelemetryWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, Category="EasyTelemetry")
	void LoadData();

	UFUNCTION(BlueprintCallable, Category="EasyTelemetry")
	void UpdateMechanicState(FString Mechanic, bool bState);

public:
	UFUNCTION(BlueprintImplementableEvent, Category="EasyTelemetry")
	void DataLoaded();
};
