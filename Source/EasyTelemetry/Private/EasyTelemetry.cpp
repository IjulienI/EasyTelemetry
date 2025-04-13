// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyTelemetry.h"
#include "EasyTelemetryStyle.h"
#include "EasyTelemetryCommands.h"
#include "ToolMenus.h"
#include "Editor.h"
#include "EditorAssetLibrary.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"

static const FName EasyTelemetryTabName("EasyTelemetry");

#define LOCTEXT_NAMESPACE "FEasyTelemetryModule"

void FEasyTelemetryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEasyTelemetryStyle::Initialize();
	FEasyTelemetryStyle::ReloadTextures();

	FEasyTelemetryCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FEasyTelemetryCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FEasyTelemetryModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FEasyTelemetryModule::RegisterMenus));
}

void FEasyTelemetryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FEasyTelemetryStyle::Shutdown();

	FEasyTelemetryCommands::Unregister();
}

void FEasyTelemetryModule::PluginButtonClicked()
{
	UObject * Blueprint = UEditorAssetLibrary::LoadAsset(FString(TEXT("/EasyTelemetry/EditorWidget/GameplayMetrics.GameplayMetrics")));
	if(IsValid(Blueprint)) 
	{
		//Make sure it's actually an editor widget
		UEditorUtilityWidgetBlueprint* EditorWidget = Cast<UEditorUtilityWidgetBlueprint>(Blueprint);
		if (IsValid(EditorWidget)) 
		{
			//Use the utility subsystem to spawn the widget
			UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
			EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);
		}
	}
}

void FEasyTelemetryModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FEasyTelemetryCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FEasyTelemetryCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEasyTelemetryModule, EasyTelemetry)