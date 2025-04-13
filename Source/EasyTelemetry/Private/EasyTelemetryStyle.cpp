// Fill out your copyright notice in the Description page of Project Settings.


#include "EasyTelemetryStyle.h"

#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"
#include "Styling/SlateStyleRegistry.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FEasyTelemetryStyle::StyleInstance = nullptr;

void FEasyTelemetryStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FEasyTelemetryStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

void FEasyTelemetryStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FEasyTelemetryStyle::Get()
{
	return *StyleInstance;
}

FName FEasyTelemetryStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("EasyTelemetryStyle"));
	return StyleSetName;
}

TSharedPtr<class FSlateStyleSet> FEasyTelemetryStyle::Create()
{
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("EasyTelemetryStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("EasyTelemetry")->GetBaseDir() / TEXT("Resources"));

	Style->Set("EasyTelemetry.PluginAction", new IMAGE_BRUSH("GameplayMetricsButtonIcon", CoreStyleConstants::Icon32x32));
	return Style;
}
