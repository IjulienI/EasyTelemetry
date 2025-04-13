// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ETWidgets/ET_TelemetryWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYTELEMETRY_ET_TelemetryWidget_generated_h
#error "ET_TelemetryWidget.generated.h already included, missing '#pragma once' in ET_TelemetryWidget.h"
#endif
#define EASYTELEMETRY_ET_TelemetryWidget_generated_h

#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateMechanicState); \
	DECLARE_FUNCTION(execLoadData);


#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUET_TelemetryWidget(); \
	friend struct Z_Construct_UClass_UET_TelemetryWidget_Statics; \
public: \
	DECLARE_CLASS(UET_TelemetryWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyTelemetry"), NO_API) \
	DECLARE_SERIALIZER(UET_TelemetryWidget)


#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UET_TelemetryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UET_TelemetryWidget(UET_TelemetryWidget&&); \
	UET_TelemetryWidget(const UET_TelemetryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UET_TelemetryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UET_TelemetryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UET_TelemetryWidget) \
	NO_API virtual ~UET_TelemetryWidget();


#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_12_PROLOG
#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYTELEMETRY_API UClass* StaticClass<class UET_TelemetryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_ETWidgets_ET_TelemetryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
