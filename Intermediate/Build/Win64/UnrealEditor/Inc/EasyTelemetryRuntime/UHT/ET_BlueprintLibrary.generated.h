// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ET_BlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UObject;
struct FLinearColor;
#ifdef EASYTELEMETRYRUNTIME_ET_BlueprintLibrary_generated_h
#error "ET_BlueprintLibrary.generated.h already included, missing '#pragma once' in ET_BlueprintLibrary.h"
#endif
#define EASYTELEMETRYRUNTIME_ET_BlueprintLibrary_generated_h

#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTrackMechanic); \
	DECLARE_FUNCTION(execTrackCharacter);


#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUET_BlueprintLibrary(); \
	friend struct Z_Construct_UClass_UET_BlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UET_BlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyTelemetryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UET_BlueprintLibrary)


#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UET_BlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UET_BlueprintLibrary(UET_BlueprintLibrary&&); \
	UET_BlueprintLibrary(const UET_BlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UET_BlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UET_BlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UET_BlueprintLibrary) \
	NO_API virtual ~UET_BlueprintLibrary();


#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_12_PROLOG
#define FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYTELEMETRYRUNTIME_API UClass* StaticClass<class UET_BlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Public_ET_BlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
