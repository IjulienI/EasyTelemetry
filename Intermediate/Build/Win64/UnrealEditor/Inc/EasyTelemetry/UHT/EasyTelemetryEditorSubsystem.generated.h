// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyTelemetryEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UET_TelemetryWidget;
enum class DrawType : uint8;
struct FTrack;
#ifdef EASYTELEMETRY_EasyTelemetryEditorSubsystem_generated_h
#error "EasyTelemetryEditorSubsystem.generated.h already included, missing '#pragma once' in EasyTelemetryEditorSubsystem.h"
#endif
#define EASYTELEMETRY_EasyTelemetryEditorSubsystem_generated_h

#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDrawHeat); \
	DECLARE_FUNCTION(execSetDraw); \
	DECLARE_FUNCTION(execSetDrawType); \
	DECLARE_FUNCTION(execGetMaxTime); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execDrawMecanics); \
	DECLARE_FUNCTION(execFlushTrajectory); \
	DECLARE_FUNCTION(execDrawTrajectory); \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execRefreshSettings); \
	DECLARE_FUNCTION(execGetTracks); \
	DECLARE_FUNCTION(execLoadData);


#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyTelemetryEditorSubsystem(); \
	friend struct Z_Construct_UClass_UEasyTelemetryEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEasyTelemetryEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyTelemetry"), NO_API) \
	DECLARE_SERIALIZER(UEasyTelemetryEditorSubsystem)


#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyTelemetryEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyTelemetryEditorSubsystem(UEasyTelemetryEditorSubsystem&&); \
	UEasyTelemetryEditorSubsystem(const UEasyTelemetryEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyTelemetryEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyTelemetryEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEasyTelemetryEditorSubsystem) \
	NO_API virtual ~UEasyTelemetryEditorSubsystem();


#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_15_PROLOG
#define FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYTELEMETRY_API UClass* StaticClass<class UEasyTelemetryEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetry_Public_EasyTelemetryEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
