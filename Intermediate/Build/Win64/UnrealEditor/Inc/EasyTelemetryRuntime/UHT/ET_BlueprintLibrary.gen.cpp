// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyTelemetryRuntime/Public/ET_BlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeET_BlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
EASYTELEMETRYRUNTIME_API UClass* Z_Construct_UClass_UET_BlueprintLibrary();
EASYTELEMETRYRUNTIME_API UClass* Z_Construct_UClass_UET_BlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_EasyTelemetryRuntime();
// End Cross Module References

// Begin Class UET_BlueprintLibrary Function TrackCharacter
struct Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics
{
	struct ET_BlueprintLibrary_eventTrackCharacter_Parms
	{
		const UObject* WorldContextObject;
		ACharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "EasyTelemetry|Tracking" },
		{ "DisplayName", "Track Character" },
		{ "Keyword", "TrackCharacter" },
		{ "ModuleRelativePath", "Public/ET_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts tracking the specified character's location over time.\nLogged data will be saved automatically. \n\n Tips : You can modify the logIntervale from ProjectSettings -> EasyTelemetry -> LogIntervale" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ET_BlueprintLibrary_eventTrackCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ET_BlueprintLibrary_eventTrackCharacter_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UET_BlueprintLibrary, nullptr, "TrackCharacter", nullptr, nullptr, Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::ET_BlueprintLibrary_eventTrackCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::ET_BlueprintLibrary_eventTrackCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UET_BlueprintLibrary::execTrackCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	UET_BlueprintLibrary::TrackCharacter(Z_Param_WorldContextObject,Z_Param_Character);
	P_NATIVE_END;
}
// End Class UET_BlueprintLibrary Function TrackCharacter

// Begin Class UET_BlueprintLibrary Function TrackMechanic
struct Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics
{
	struct ET_BlueprintLibrary_eventTrackMechanic_Parms
	{
		const UObject* WorldContextObject;
		ACharacter* Character;
		FString Mechanic;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "EasyTelemetry|Tracking" },
		{ "DisplayName", "Track Mechanic" },
		{ "Keyword", "TrackMechanic" },
		{ "ModuleRelativePath", "Public/ET_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs a gameplay mechanic event for the specified character with a visual color for editor visualization." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Mechanic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ET_BlueprintLibrary_eventTrackMechanic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ET_BlueprintLibrary_eventTrackMechanic_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_Mechanic = { "Mechanic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ET_BlueprintLibrary_eventTrackMechanic_Parms, Mechanic), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ET_BlueprintLibrary_eventTrackMechanic_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_Mechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UET_BlueprintLibrary, nullptr, "TrackMechanic", nullptr, nullptr, Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::ET_BlueprintLibrary_eventTrackMechanic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::ET_BlueprintLibrary_eventTrackMechanic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UET_BlueprintLibrary::execTrackMechanic)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_PROPERTY(FStrProperty,Z_Param_Mechanic);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UET_BlueprintLibrary::TrackMechanic(Z_Param_WorldContextObject,Z_Param_Character,Z_Param_Mechanic,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UET_BlueprintLibrary Function TrackMechanic

// Begin Class UET_BlueprintLibrary
void UET_BlueprintLibrary::StaticRegisterNativesUET_BlueprintLibrary()
{
	UClass* Class = UET_BlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TrackCharacter", &UET_BlueprintLibrary::execTrackCharacter },
		{ "TrackMechanic", &UET_BlueprintLibrary::execTrackMechanic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UET_BlueprintLibrary);
UClass* Z_Construct_UClass_UET_BlueprintLibrary_NoRegister()
{
	return UET_BlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UET_BlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ET_BlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ET_BlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UET_BlueprintLibrary_TrackCharacter, "TrackCharacter" }, // 163520062
		{ &Z_Construct_UFunction_UET_BlueprintLibrary_TrackMechanic, "TrackMechanic" }, // 2876591270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UET_BlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UET_BlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UET_BlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UET_BlueprintLibrary_Statics::ClassParams = {
	&UET_BlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UET_BlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UET_BlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UET_BlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UET_BlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UET_BlueprintLibrary.OuterSingleton, Z_Construct_UClass_UET_BlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UET_BlueprintLibrary.OuterSingleton;
}
template<> EASYTELEMETRYRUNTIME_API UClass* StaticClass<UET_BlueprintLibrary>()
{
	return UET_BlueprintLibrary::StaticClass();
}
UET_BlueprintLibrary::UET_BlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UET_BlueprintLibrary);
UET_BlueprintLibrary::~UET_BlueprintLibrary() {}
// End Class UET_BlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UET_BlueprintLibrary, UET_BlueprintLibrary::StaticClass, TEXT("UET_BlueprintLibrary"), &Z_Registration_Info_UClass_UET_BlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UET_BlueprintLibrary), 1814012261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_3427288822(TEXT("/Script/EasyTelemetryRuntime"),
	Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
