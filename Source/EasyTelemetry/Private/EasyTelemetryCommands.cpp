// Fill out your copyright notice in the Description page of Project Settings.


#include "EasyTelemetryCommands.h"

#define LOCTEXT_NAMESPACE "FEasyTelemetryModule"

void FEasyTelemetryCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "EasyTelemetry", "Open HUB", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE