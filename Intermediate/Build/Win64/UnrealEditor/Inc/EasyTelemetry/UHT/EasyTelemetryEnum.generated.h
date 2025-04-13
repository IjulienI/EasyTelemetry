// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enum/EasyTelemetryEnum.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYTELEMETRY_EasyTelemetryEnum_generated_h
#error "EasyTelemetryEnum.generated.h already included, missing '#pragma once' in EasyTelemetryEnum.h"
#endif
#define EASYTELEMETRY_EasyTelemetryEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_P_GameplayMetrics_Plugins_EasyTelemetry_Source_EasyTelemetry_Enum_EasyTelemetryEnum_h


#define FOREACH_ENUM_DRAWTYPE(op) \
	op(DrawType::Default) \
	op(DrawType::Trajectory) \
	op(DrawType::Mechanic) \
	op(DrawType::Both) 

enum class DrawType : uint8;
template<> struct TIsUEnumClass<DrawType> { enum { Value = true }; };
template<> EASYTELEMETRY_API UEnum* StaticEnum<DrawType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
