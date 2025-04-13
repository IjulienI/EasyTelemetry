// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyTelemetry/Public/ETWidgets/ET_TelemetryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeET_TelemetryWidget() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
EASYTELEMETRY_API UClass* Z_Construct_UClass_UET_TelemetryWidget();
EASYTELEMETRY_API UClass* Z_Construct_UClass_UET_TelemetryWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyTelemetry();
// End Cross Module References

// Begin Class UET_TelemetryWidget Function DataLoaded
static FName NAME_UET_TelemetryWidget_DataLoaded = FName(TEXT("DataLoaded"));
void UET_TelemetryWidget::DataLoaded()
{
	ProcessEvent(FindFunctionChecked(NAME_UET_TelemetryWidget_DataLoaded),NULL);
}
struct Z_Construct_UFunction_UET_TelemetryWidget_DataLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry" },
		{ "ModuleRelativePath", "Public/ETWidgets/ET_TelemetryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UET_TelemetryWidget_DataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UET_TelemetryWidget, nullptr, "DataLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_TelemetryWidget_DataLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UET_TelemetryWidget_DataLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UET_TelemetryWidget_DataLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UET_TelemetryWidget_DataLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UET_TelemetryWidget Function DataLoaded

// Begin Class UET_TelemetryWidget Function LoadData
struct Z_Construct_UFunction_UET_TelemetryWidget_LoadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry" },
		{ "ModuleRelativePath", "Public/ETWidgets/ET_TelemetryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UET_TelemetryWidget_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UET_TelemetryWidget, nullptr, "LoadData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_TelemetryWidget_LoadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UET_TelemetryWidget_LoadData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UET_TelemetryWidget_LoadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UET_TelemetryWidget_LoadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UET_TelemetryWidget::execLoadData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadData();
	P_NATIVE_END;
}
// End Class UET_TelemetryWidget Function LoadData

// Begin Class UET_TelemetryWidget Function UpdateMechanicState
struct Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics
{
	struct ET_TelemetryWidget_eventUpdateMechanicState_Parms
	{
		FString Mechanic;
		bool bState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry" },
		{ "ModuleRelativePath", "Public/ETWidgets/ET_TelemetryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Mechanic;
	static void NewProp_bState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::NewProp_Mechanic = { "Mechanic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ET_TelemetryWidget_eventUpdateMechanicState_Parms, Mechanic), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::NewProp_bState_SetBit(void* Obj)
{
	((ET_TelemetryWidget_eventUpdateMechanicState_Parms*)Obj)->bState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ET_TelemetryWidget_eventUpdateMechanicState_Parms), &Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::NewProp_bState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::NewProp_Mechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::NewProp_bState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UET_TelemetryWidget, nullptr, "UpdateMechanicState", nullptr, nullptr, Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::ET_TelemetryWidget_eventUpdateMechanicState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::ET_TelemetryWidget_eventUpdateMechanicState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UET_TelemetryWidget::execUpdateMechanicState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Mechanic);
	P_GET_UBOOL(Z_Param_bState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMechanicState(Z_Param_Mechanic,Z_Param_bState);
	P_NATIVE_END;
}
// End Class UET_TelemetryWidget Function UpdateMechanicState

// Begin Class UET_TelemetryWidget
void UET_TelemetryWidget::StaticRegisterNativesUET_TelemetryWidget()
{
	UClass* Class = UET_TelemetryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadData", &UET_TelemetryWidget::execLoadData },
		{ "UpdateMechanicState", &UET_TelemetryWidget::execUpdateMechanicState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UET_TelemetryWidget);
UClass* Z_Construct_UClass_UET_TelemetryWidget_NoRegister()
{
	return UET_TelemetryWidget::StaticClass();
}
struct Z_Construct_UClass_UET_TelemetryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ETWidgets/ET_TelemetryWidget.h" },
		{ "ModuleRelativePath", "Public/ETWidgets/ET_TelemetryWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UET_TelemetryWidget_DataLoaded, "DataLoaded" }, // 699213461
		{ &Z_Construct_UFunction_UET_TelemetryWidget_LoadData, "LoadData" }, // 2882295968
		{ &Z_Construct_UFunction_UET_TelemetryWidget_UpdateMechanicState, "UpdateMechanicState" }, // 2598457150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UET_TelemetryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UET_TelemetryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UET_TelemetryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UET_TelemetryWidget_Statics::ClassParams = {
	&UET_TelemetryWidget::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UET_TelemetryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UET_TelemetryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UET_TelemetryWidget()
{
	if (!Z_Registration_Info_UClass_UET_TelemetryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UET_TelemetryWidget.OuterSingleton, Z_Construct_UClass_UET_TelemetryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UET_TelemetryWidget.OuterSingleton;
}
template<> EASYTELEMETRY_API UClass* StaticClass<UET_TelemetryWidget>()
{
	return UET_TelemetryWidget::StaticClass();
}
UET_TelemetryWidget::UET_TelemetryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UET_TelemetryWidget);
UET_TelemetryWidget::~UET_TelemetryWidget() {}
// End Class UET_TelemetryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UET_TelemetryWidget, UET_TelemetryWidget::StaticClass, TEXT("UET_TelemetryWidget"), &Z_Registration_Info_UClass_UET_TelemetryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UET_TelemetryWidget), 3440290213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_1061714608(TEXT("/Script/EasyTelemetry"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
