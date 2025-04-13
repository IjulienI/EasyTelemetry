// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyTelemetry/Enum/EasyTelemetryEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyTelemetryEnum() {}

// Begin Cross Module References
EASYTELEMETRY_API UEnum* Z_Construct_UEnum_EasyTelemetry_DrawType();
UPackage* Z_Construct_UPackage__Script_EasyTelemetry();
// End Cross Module References

// Begin Enum DrawType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DrawType;
static UEnum* DrawType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DrawType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DrawType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyTelemetry_DrawType, (UObject*)Z_Construct_UPackage__Script_EasyTelemetry(), TEXT("DrawType"));
	}
	return Z_Registration_Info_UEnum_DrawType.OuterSingleton;
}
template<> EASYTELEMETRY_API UEnum* StaticEnum<DrawType>()
{
	return DrawType_StaticEnum();
}
struct Z_Construct_UEnum_EasyTelemetry_DrawType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.DisplayName", "Both" },
		{ "Both.Name", "DrawType::Both" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "DrawType::Default" },
		{ "Mechanic.DisplayName", "Mechanic" },
		{ "Mechanic.Name", "DrawType::Mechanic" },
		{ "ModuleRelativePath", "Enum/EasyTelemetryEnum.h" },
		{ "Trajectory.DisplayName", "Trajectory" },
		{ "Trajectory.Name", "DrawType::Trajectory" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DrawType::Default", (int64)DrawType::Default },
		{ "DrawType::Trajectory", (int64)DrawType::Trajectory },
		{ "DrawType::Mechanic", (int64)DrawType::Mechanic },
		{ "DrawType::Both", (int64)DrawType::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyTelemetry_DrawType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyTelemetry,
	nullptr,
	"DrawType",
	"DrawType",
	Z_Construct_UEnum_EasyTelemetry_DrawType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyTelemetry_DrawType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyTelemetry_DrawType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyTelemetry_DrawType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyTelemetry_DrawType()
{
	if (!Z_Registration_Info_UEnum_DrawType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DrawType.InnerSingleton, Z_Construct_UEnum_EasyTelemetry_DrawType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DrawType.InnerSingleton;
}
// End Enum DrawType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Enum_EasyTelemetryEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DrawType_StaticEnum, TEXT("DrawType"), &Z_Registration_Info_UEnum_DrawType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2788897021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Enum_EasyTelemetryEnum_h_1282876700(TEXT("/Script/EasyTelemetry"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Enum_EasyTelemetryEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Enum_EasyTelemetryEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
