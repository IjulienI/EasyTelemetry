// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyTelemetryRuntime/Public/EasyTelemetrySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyTelemetrySettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
EASYTELEMETRYRUNTIME_API UClass* Z_Construct_UClass_UEasyTelemetrySettings();
EASYTELEMETRYRUNTIME_API UClass* Z_Construct_UClass_UEasyTelemetrySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyTelemetryRuntime();
// End Cross Module References

// Begin Class UEasyTelemetrySettings
void UEasyTelemetrySettings::StaticRegisterNativesUEasyTelemetrySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyTelemetrySettings);
UClass* Z_Construct_UClass_UEasyTelemetrySettings_NoRegister()
{
	return UEasyTelemetrySettings::StaticClass();
}
struct Z_Construct_UClass_UEasyTelemetrySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Easy Telemetry" },
		{ "IncludePath", "EasyTelemetrySettings.h" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogInterval_MetaData[] = {
		{ "Category", "EasyTelemetry|Settings" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in seconds between each player position recording." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColdColor_MetaData[] = {
		{ "Category", "EasyTelemetry|Heat" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Low density Heat visualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HotColor_MetaData[] = {
		{ "Category", "EasyTelemetry|Heat" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High density Heat visualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryRadius_MetaData[] = {
		{ "Category", "EasyTelemetry|Heat|Trajectory" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectorySensitivity_MetaData[] = {
		{ "Category", "EasyTelemetry|Heat|Trajectory" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MechanicRadius_MetaData[] = {
		{ "Category", "EasyTelemetry|Heat|Mechanic" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MechanicSensitivity_MetaData[] = {
		{ "Category", "EasyTelemetry|Heat|Mechanic" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColdColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HotColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectoryRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectorySensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MechanicRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MechanicSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyTelemetrySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_LogInterval = { "LogInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySettings, LogInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogInterval_MetaData), NewProp_LogInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_ColdColor = { "ColdColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySettings, ColdColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColdColor_MetaData), NewProp_ColdColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_HotColor = { "HotColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySettings, HotColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HotColor_MetaData), NewProp_HotColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_TrajectoryRadius = { "TrajectoryRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySettings, TrajectoryRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryRadius_MetaData), NewProp_TrajectoryRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_TrajectorySensitivity = { "TrajectorySensitivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySettings, TrajectorySensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectorySensitivity_MetaData), NewProp_TrajectorySensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_MechanicRadius = { "MechanicRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySettings, MechanicRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MechanicRadius_MetaData), NewProp_MechanicRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_MechanicSensitivity = { "MechanicSensitivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySettings, MechanicSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MechanicSensitivity_MetaData), NewProp_MechanicSensitivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyTelemetrySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_LogInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_ColdColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_HotColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_TrajectoryRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_TrajectorySensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_MechanicRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySettings_Statics::NewProp_MechanicSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEasyTelemetrySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyTelemetrySettings_Statics::ClassParams = {
	&UEasyTelemetrySettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEasyTelemetrySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyTelemetrySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyTelemetrySettings()
{
	if (!Z_Registration_Info_UClass_UEasyTelemetrySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyTelemetrySettings.OuterSingleton, Z_Construct_UClass_UEasyTelemetrySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyTelemetrySettings.OuterSingleton;
}
template<> EASYTELEMETRYRUNTIME_API UClass* StaticClass<UEasyTelemetrySettings>()
{
	return UEasyTelemetrySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyTelemetrySettings);
UEasyTelemetrySettings::~UEasyTelemetrySettings() {}
// End Class UEasyTelemetrySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyTelemetrySettings, UEasyTelemetrySettings::StaticClass, TEXT("UEasyTelemetrySettings"), &Z_Registration_Info_UClass_UEasyTelemetrySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyTelemetrySettings), 2673829641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_2130191801(TEXT("/Script/EasyTelemetryRuntime"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
