// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyTelemetrySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYTELEMETRYRUNTIME_EasyTelemetrySettings_generated_h
#error "EasyTelemetrySettings.generated.h already included, missing '#pragma once' in EasyTelemetrySettings.h"
#endif
#define EASYTELEMETRYRUNTIME_EasyTelemetrySettings_generated_h

#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyTelemetrySettings(); \
	friend struct Z_Construct_UClass_UEasyTelemetrySettings_Statics; \
public: \
	DECLARE_CLASS(UEasyTelemetrySettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyTelemetryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UEasyTelemetrySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyTelemetrySettings(UEasyTelemetrySettings&&); \
	UEasyTelemetrySettings(const UEasyTelemetrySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyTelemetrySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyTelemetrySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyTelemetrySettings) \
	NO_API virtual ~UEasyTelemetrySettings();


#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_9_PROLOG
#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYTELEMETRYRUNTIME_API UClass* StaticClass<class UEasyTelemetrySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_EasyTelemetrySettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
