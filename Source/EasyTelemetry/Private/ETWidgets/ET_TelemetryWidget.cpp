// Fill out your copyright notice in the Description page of Project Settings.


#include "ETWidgets/ET_TelemetryWidget.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

#include "EasyTelemetryEditorSubsystem.h"

void UET_TelemetryWidget::LoadData()
{
	UEasyTelemetryEditorSubsystem* Subsystem = GEditor->GetEditorSubsystem<UEasyTelemetryEditorSubsystem>();

	Subsystem->LoadData(this);
}

void UET_TelemetryWidget::UpdateMechanicState(FString Mechanic, bool bState)
{
	UEasyTelemetryEditorSubsystem* Subsystem = GEditor->GetEditorSubsystem<UEasyTelemetryEditorSubsystem>();

	Subsystem->UpdateMechanicState(Mechanic, bState);
}

void UET_TelemetryWidget::OpenDataFolder()
{
	FString PluginDir = FPaths::ProjectPluginsDir();
	FString FullPath = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*PluginDir);
	FString DataFolderPath = FPaths::Combine(TEXT("file://"), FullPath, TEXT("EasyTelemetry"), TEXT("Data"));

	FPlatformProcess::LaunchURL(*DataFolderPath, nullptr, nullptr);
}
