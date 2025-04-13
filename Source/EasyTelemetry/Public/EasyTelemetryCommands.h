// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EasyTelemetryStyle.h"

/**
 * 
 */
class FEasyTelemetryCommands : public TCommands<FEasyTelemetryCommands>
{
public:

	FEasyTelemetryCommands()
		: TCommands<FEasyTelemetryCommands>(TEXT("EasyTelemetry"), NSLOCTEXT("Contexts", "EasyTelemetry", "EasyTelemetry Plugin"),
			NAME_None, FEasyTelemetryStyle::GetStyleSetName())
	{
		
	}

	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> PluginAction;
};
