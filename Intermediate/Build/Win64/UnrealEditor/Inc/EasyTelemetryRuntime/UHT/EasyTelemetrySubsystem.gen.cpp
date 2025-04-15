// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyTelemetryRuntime/Public/EasyTelemetrySubsystem.h"
#include "EasyTelemetryRuntime/Structures/EasyTelemetryStuct.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyTelemetrySubsystem() {}

// Begin Cross Module References
EASYTELEMETRYRUNTIME_API UClass* Z_Construct_UClass_UEasyTelemetrySubsystem();
EASYTELEMETRYRUNTIME_API UClass* Z_Construct_UClass_UEasyTelemetrySubsystem_NoRegister();
EASYTELEMETRYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMechanic();
EASYTELEMETRYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLocation();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyTelemetryRuntime();
// End Cross Module References

// Begin Class UEasyTelemetrySubsystem
void UEasyTelemetrySubsystem::StaticRegisterNativesUEasyTelemetrySubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyTelemetrySubsystem);
UClass* Z_Construct_UClass_UEasyTelemetrySubsystem_NoRegister()
{
	return UEasyTelemetrySubsystem::StaticClass();
}
struct Z_Construct_UClass_UEasyTelemetrySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EasyTelemetrySubsystem.h" },
		{ "ModuleRelativePath", "Public/EasyTelemetrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyTelemetrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyTelemetrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationsLog_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyTelemetrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MechanicsLog_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyTelemetrySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Characters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationsLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocationsLog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MechanicsLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MechanicsLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyTelemetrySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_mWorld = { "mWorld", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySubsystem, mWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mWorld_MetaData), NewProp_mWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySubsystem, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Characters_MetaData), NewProp_Characters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_LocationsLog_Inner = { "LocationsLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerLocation, METADATA_PARAMS(0, nullptr) }; // 1756572027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_LocationsLog = { "LocationsLog", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySubsystem, LocationsLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationsLog_MetaData), NewProp_LocationsLog_MetaData) }; // 1756572027
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_MechanicsLog_Inner = { "MechanicsLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMechanic, METADATA_PARAMS(0, nullptr) }; // 3037053307
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_MechanicsLog = { "MechanicsLog", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetrySubsystem, MechanicsLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MechanicsLog_MetaData), NewProp_MechanicsLog_MetaData) }; // 3037053307
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_mWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_Characters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_Characters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_LocationsLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_LocationsLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_MechanicsLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::NewProp_MechanicsLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::ClassParams = {
	&UEasyTelemetrySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyTelemetrySubsystem()
{
	if (!Z_Registration_Info_UClass_UEasyTelemetrySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyTelemetrySubsystem.OuterSingleton, Z_Construct_UClass_UEasyTelemetrySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyTelemetrySubsystem.OuterSingleton;
}
template<> EASYTELEMETRYRUNTIME_API UClass* StaticClass<UEasyTelemetrySubsystem>()
{
	return UEasyTelemetrySubsystem::StaticClass();
}
UEasyTelemetrySubsystem::UEasyTelemetrySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyTelemetrySubsystem);
UEasyTelemetrySubsystem::~UEasyTelemetrySubsystem() {}
// End Class UEasyTelemetrySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyTelemetrySubsystem, UEasyTelemetrySubsystem::StaticClass, TEXT("UEasyTelemetrySubsystem"), &Z_Registration_Info_UClass_UEasyTelemetrySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyTelemetrySubsystem), 3228858571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySubsystem_h_4027931030(TEXT("/Script/EasyTelemetryRuntime"),
	Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
