// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyTelemetry/Public/EasyTelemetryEditorSubsystem.h"
#include "EasyTelemetryRuntime/Structures/EasyTelemetryStuct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyTelemetryEditorSubsystem() {}

// Begin Cross Module References
EASYTELEMETRY_API UClass* Z_Construct_UClass_UEasyTelemetryEditorSubsystem();
EASYTELEMETRY_API UClass* Z_Construct_UClass_UEasyTelemetryEditorSubsystem_NoRegister();
EASYTELEMETRY_API UClass* Z_Construct_UClass_UET_TelemetryWidget_NoRegister();
EASYTELEMETRY_API UEnum* Z_Construct_UEnum_EasyTelemetry_DrawType();
EASYTELEMETRYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTrack();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
UPackage* Z_Construct_UPackage__Script_EasyTelemetry();
// End Cross Module References

// Begin Class UEasyTelemetryEditorSubsystem Function Draw
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_Draw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_Draw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "Draw", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_Draw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_Draw_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_Draw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_Draw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execDraw)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Draw();
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function Draw

// Begin Class UEasyTelemetryEditorSubsystem Function DrawMecanics
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics
{
	struct EasyTelemetryEditorSubsystem_eventDrawMecanics_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyTelemetryEditorSubsystem_eventDrawMecanics_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "DrawMecanics", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::EasyTelemetryEditorSubsystem_eventDrawMecanics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::EasyTelemetryEditorSubsystem_eventDrawMecanics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execDrawMecanics)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawMecanics(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function DrawMecanics

// Begin Class UEasyTelemetryEditorSubsystem Function DrawTrajectory
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics
{
	struct EasyTelemetryEditorSubsystem_eventDrawTrajectory_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyTelemetryEditorSubsystem_eventDrawTrajectory_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "DrawTrajectory", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::EasyTelemetryEditorSubsystem_eventDrawTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::EasyTelemetryEditorSubsystem_eventDrawTrajectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execDrawTrajectory)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawTrajectory(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function DrawTrajectory

// Begin Class UEasyTelemetryEditorSubsystem Function FlushTrajectory
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_FlushTrajectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_FlushTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "FlushTrajectory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_FlushTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_FlushTrajectory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_FlushTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_FlushTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execFlushTrajectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlushTrajectory();
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function FlushTrajectory

// Begin Class UEasyTelemetryEditorSubsystem Function GetMaxTime
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics
{
	struct EasyTelemetryEditorSubsystem_eventGetMaxTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyTelemetryEditorSubsystem_eventGetMaxTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "GetMaxTime", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::EasyTelemetryEditorSubsystem_eventGetMaxTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::EasyTelemetryEditorSubsystem_eventGetMaxTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execGetMaxTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxTime();
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function GetMaxTime

// Begin Class UEasyTelemetryEditorSubsystem Function GetTracks
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics
{
	struct EasyTelemetryEditorSubsystem_eventGetTracks_Parms
	{
		TArray<FTrack> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrack, METADATA_PARAMS(0, nullptr) }; // 2099923897
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyTelemetryEditorSubsystem_eventGetTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2099923897
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "GetTracks", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::EasyTelemetryEditorSubsystem_eventGetTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::EasyTelemetryEditorSubsystem_eventGetTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execGetTracks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTrack>*)Z_Param__Result=P_THIS->GetTracks();
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function GetTracks

// Begin Class UEasyTelemetryEditorSubsystem Function LoadData
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics
{
	struct EasyTelemetryEditorSubsystem_eventLoadData_Parms
	{
		UET_TelemetryWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyTelemetryEditorSubsystem_eventLoadData_Parms, Widget), Z_Construct_UClass_UET_TelemetryWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "LoadData", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::EasyTelemetryEditorSubsystem_eventLoadData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::EasyTelemetryEditorSubsystem_eventLoadData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execLoadData)
{
	P_GET_OBJECT(UET_TelemetryWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadData(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function LoadData

// Begin Class UEasyTelemetryEditorSubsystem Function RefreshSettings
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_RefreshSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_RefreshSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "RefreshSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_RefreshSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_RefreshSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_RefreshSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_RefreshSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execRefreshSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshSettings();
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function RefreshSettings

// Begin Class UEasyTelemetryEditorSubsystem Function SetDraw
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics
{
	struct EasyTelemetryEditorSubsystem_eventSetDraw_Parms
	{
		bool pDraw;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_pDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_pDraw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::NewProp_pDraw_SetBit(void* Obj)
{
	((EasyTelemetryEditorSubsystem_eventSetDraw_Parms*)Obj)->pDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::NewProp_pDraw = { "pDraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyTelemetryEditorSubsystem_eventSetDraw_Parms), &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::NewProp_pDraw_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::NewProp_pDraw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "SetDraw", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::EasyTelemetryEditorSubsystem_eventSetDraw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::EasyTelemetryEditorSubsystem_eventSetDraw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execSetDraw)
{
	P_GET_UBOOL(Z_Param_pDraw);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDraw(Z_Param_pDraw);
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function SetDraw

// Begin Class UEasyTelemetryEditorSubsystem Function SetDrawHeat
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics
{
	struct EasyTelemetryEditorSubsystem_eventSetDrawHeat_Parms
	{
		bool pDrawHeat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_pDrawHeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_pDrawHeat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::NewProp_pDrawHeat_SetBit(void* Obj)
{
	((EasyTelemetryEditorSubsystem_eventSetDrawHeat_Parms*)Obj)->pDrawHeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::NewProp_pDrawHeat = { "pDrawHeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyTelemetryEditorSubsystem_eventSetDrawHeat_Parms), &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::NewProp_pDrawHeat_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::NewProp_pDrawHeat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "SetDrawHeat", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::EasyTelemetryEditorSubsystem_eventSetDrawHeat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::EasyTelemetryEditorSubsystem_eventSetDrawHeat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execSetDrawHeat)
{
	P_GET_UBOOL(Z_Param_pDrawHeat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawHeat(Z_Param_pDrawHeat);
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function SetDrawHeat

// Begin Class UEasyTelemetryEditorSubsystem Function SetDrawType
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics
{
	struct EasyTelemetryEditorSubsystem_eventSetDrawType_Parms
	{
		DrawType DrawType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::NewProp_DrawType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::NewProp_DrawType = { "DrawType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyTelemetryEditorSubsystem_eventSetDrawType_Parms, DrawType), Z_Construct_UEnum_EasyTelemetry_DrawType, METADATA_PARAMS(0, nullptr) }; // 2788897021
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::NewProp_DrawType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::NewProp_DrawType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "SetDrawType", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::EasyTelemetryEditorSubsystem_eventSetDrawType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::EasyTelemetryEditorSubsystem_eventSetDrawType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execSetDrawType)
{
	P_GET_ENUM(DrawType,Z_Param_DrawType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawType(DrawType(Z_Param_DrawType));
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function SetDrawType

// Begin Class UEasyTelemetryEditorSubsystem Function SetTime
struct Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics
{
	struct EasyTelemetryEditorSubsystem_eventSetTime_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyTelemetry|Tracking" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyTelemetryEditorSubsystem_eventSetTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyTelemetryEditorSubsystem, nullptr, "SetTime", nullptr, nullptr, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::EasyTelemetryEditorSubsystem_eventSetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::EasyTelemetryEditorSubsystem_eventSetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyTelemetryEditorSubsystem::execSetTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTime(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UEasyTelemetryEditorSubsystem Function SetTime

// Begin Class UEasyTelemetryEditorSubsystem
void UEasyTelemetryEditorSubsystem::StaticRegisterNativesUEasyTelemetryEditorSubsystem()
{
	UClass* Class = UEasyTelemetryEditorSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Draw", &UEasyTelemetryEditorSubsystem::execDraw },
		{ "DrawMecanics", &UEasyTelemetryEditorSubsystem::execDrawMecanics },
		{ "DrawTrajectory", &UEasyTelemetryEditorSubsystem::execDrawTrajectory },
		{ "FlushTrajectory", &UEasyTelemetryEditorSubsystem::execFlushTrajectory },
		{ "GetMaxTime", &UEasyTelemetryEditorSubsystem::execGetMaxTime },
		{ "GetTracks", &UEasyTelemetryEditorSubsystem::execGetTracks },
		{ "LoadData", &UEasyTelemetryEditorSubsystem::execLoadData },
		{ "RefreshSettings", &UEasyTelemetryEditorSubsystem::execRefreshSettings },
		{ "SetDraw", &UEasyTelemetryEditorSubsystem::execSetDraw },
		{ "SetDrawHeat", &UEasyTelemetryEditorSubsystem::execSetDrawHeat },
		{ "SetDrawType", &UEasyTelemetryEditorSubsystem::execSetDrawType },
		{ "SetTime", &UEasyTelemetryEditorSubsystem::execSetTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyTelemetryEditorSubsystem);
UClass* Z_Construct_UClass_UEasyTelemetryEditorSubsystem_NoRegister()
{
	return UEasyTelemetryEditorSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EasyTelemetryEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMechanics_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyTelemetryEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActiveMechanics_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveMechanics_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveMechanics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_Draw, "Draw" }, // 1743390437
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawMecanics, "DrawMecanics" }, // 654703319
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_DrawTrajectory, "DrawTrajectory" }, // 439160670
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_FlushTrajectory, "FlushTrajectory" }, // 1452892127
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetMaxTime, "GetMaxTime" }, // 2243377585
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_GetTracks, "GetTracks" }, // 2740967326
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_LoadData, "LoadData" }, // 1792760329
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_RefreshSettings, "RefreshSettings" }, // 3520087571
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDraw, "SetDraw" }, // 58265962
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawHeat, "SetDrawHeat" }, // 3085801146
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetDrawType, "SetDrawType" }, // 1115171246
		{ &Z_Construct_UFunction_UEasyTelemetryEditorSubsystem_SetTime, "SetTime" }, // 2931105607
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyTelemetryEditorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrack, METADATA_PARAMS(0, nullptr) }; // 2099923897
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetryEditorSubsystem, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) }; // 2099923897
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_ActiveMechanics_ValueProp = { "ActiveMechanics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_ActiveMechanics_Key_KeyProp = { "ActiveMechanics_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_ActiveMechanics = { "ActiveMechanics", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyTelemetryEditorSubsystem, ActiveMechanics), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveMechanics_MetaData), NewProp_ActiveMechanics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_Tracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_ActiveMechanics_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_ActiveMechanics_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::NewProp_ActiveMechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::ClassParams = {
	&UEasyTelemetryEditorSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyTelemetryEditorSubsystem()
{
	if (!Z_Registration_Info_UClass_UEasyTelemetryEditorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyTelemetryEditorSubsystem.OuterSingleton, Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyTelemetryEditorSubsystem.OuterSingleton;
}
template<> EASYTELEMETRY_API UClass* StaticClass<UEasyTelemetryEditorSubsystem>()
{
	return UEasyTelemetryEditorSubsystem::StaticClass();
}
UEasyTelemetryEditorSubsystem::UEasyTelemetryEditorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyTelemetryEditorSubsystem);
UEasyTelemetryEditorSubsystem::~UEasyTelemetryEditorSubsystem() {}
// End Class UEasyTelemetryEditorSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyTelemetryEditorSubsystem, UEasyTelemetryEditorSubsystem::StaticClass, TEXT("UEasyTelemetryEditorSubsystem"), &Z_Registration_Info_UClass_UEasyTelemetryEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyTelemetryEditorSubsystem), 1803616700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_304330307(TEXT("/Script/EasyTelemetry"),
	Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
