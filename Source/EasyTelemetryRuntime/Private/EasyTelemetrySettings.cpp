// Fill out your copyright notice in the Description page of Project Settings.


#include "EasyTelemetrySettings.h"

UEasyTelemetrySettings::UEasyTelemetrySettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CategoryName = TEXT("EasyTelemetry");
	SectionName = TEXT("EasyTelemetry");
}
