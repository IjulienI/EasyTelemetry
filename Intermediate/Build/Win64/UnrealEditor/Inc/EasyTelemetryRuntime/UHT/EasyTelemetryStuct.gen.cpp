// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyTelemetryRuntime/Structures/EasyTelemetryStuct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyTelemetryStuct() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EASYTELEMETRYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMechanic();
EASYTELEMETRYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLocation();
EASYTELEMETRYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTimedMechanic();
EASYTELEMETRYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTrack();
UPackage* Z_Construct_UPackage__Script_EasyTelemetryRuntime();
// End Cross Module References

// Begin ScriptStruct FPlayerLocation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerLocation;
class UScriptStruct* FPlayerLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLocation, (UObject*)Z_Construct_UPackage__Script_EasyTelemetryRuntime(), TEXT("PlayerLocation"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerLocation.OuterSingleton;
}
template<> EASYTELEMETRYRUNTIME_API UScriptStruct* StaticStruct<FPlayerLocation>()
{
	return FPlayerLocation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStemp_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStemp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerLocation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_TimeStemp = { "TimeStemp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerLocation, TimeStemp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStemp_MetaData), NewProp_TimeStemp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_TimeStemp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetryRuntime,
	nullptr,
	&NewStructOps,
	"PlayerLocation",
	Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers),
	sizeof(FPlayerLocation),
	alignof(FPlayerLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerLocation()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerLocation.InnerSingleton, Z_Construct_UScriptStruct_FPlayerLocation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerLocation.InnerSingleton;
}
// End ScriptStruct FPlayerLocation

// Begin ScriptStruct FMechanic
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Mechanic;
class UScriptStruct* FMechanic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Mechanic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Mechanic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMechanic, (UObject*)Z_Construct_UPackage__Script_EasyTelemetryRuntime(), TEXT("Mechanic"));
	}
	return Z_Registration_Info_UScriptStruct_Mechanic.OuterSingleton;
}
template<> EASYTELEMETRYRUNTIME_API UScriptStruct* StaticStruct<FMechanic>()
{
	return FMechanic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mechanic_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStemp_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Mechanic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStemp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMechanic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_Mechanic = { "Mechanic", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMechanic, Mechanic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mechanic_MetaData), NewProp_Mechanic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMechanic, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_TimeStemp = { "TimeStemp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMechanic, TimeStemp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStemp_MetaData), NewProp_TimeStemp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMechanic, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_Mechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_TimeStemp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMechanic_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMechanic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMechanic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetryRuntime,
	nullptr,
	&NewStructOps,
	"Mechanic",
	Z_Construct_UScriptStruct_FMechanic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMechanic_Statics::PropPointers),
	sizeof(FMechanic),
	alignof(FMechanic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMechanic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMechanic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMechanic()
{
	if (!Z_Registration_Info_UScriptStruct_Mechanic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Mechanic.InnerSingleton, Z_Construct_UScriptStruct_FMechanic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Mechanic.InnerSingleton;
}
// End ScriptStruct FMechanic

// Begin ScriptStruct FTimedMechanic
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedMechanic;
class UScriptStruct* FTimedMechanic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedMechanic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedMechanic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedMechanic, (UObject*)Z_Construct_UPackage__Script_EasyTelemetryRuntime(), TEXT("TimedMechanic"));
	}
	return Z_Registration_Info_UScriptStruct_TimedMechanic.OuterSingleton;
}
template<> EASYTELEMETRYRUNTIME_API UScriptStruct* StaticStruct<FTimedMechanic>()
{
	return FTimedMechanic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimedMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mechanic_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStemp_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Mechanic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStemp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedMechanic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_Mechanic = { "Mechanic", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedMechanic, Mechanic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mechanic_MetaData), NewProp_Mechanic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedMechanic, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedMechanic, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_TimeStemp = { "TimeStemp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedMechanic, TimeStemp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStemp_MetaData), NewProp_TimeStemp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedMechanic, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_Mechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_TimeStemp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedMechanic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedMechanic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetryRuntime,
	nullptr,
	&NewStructOps,
	"TimedMechanic",
	Z_Construct_UScriptStruct_FTimedMechanic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedMechanic_Statics::PropPointers),
	sizeof(FTimedMechanic),
	alignof(FTimedMechanic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedMechanic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimedMechanic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimedMechanic()
{
	if (!Z_Registration_Info_UScriptStruct_TimedMechanic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedMechanic.InnerSingleton, Z_Construct_UScriptStruct_FTimedMechanic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TimedMechanic.InnerSingleton;
}
// End ScriptStruct FTimedMechanic

// Begin ScriptStruct FTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Track;
class UScriptStruct* FTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Track.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Track.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrack, (UObject*)Z_Construct_UPackage__Script_EasyTelemetryRuntime(), TEXT("Track"));
	}
	return Z_Registration_Info_UScriptStruct_Track.OuterSingleton;
}
template<> EASYTELEMETRYRUNTIME_API UScriptStruct* StaticStruct<FTrack>()
{
	return FTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mechanics_MetaData[] = {
		{ "Category", "EasyTelemetry|Data" },
		{ "ModuleRelativePath", "Structures/EasyTelemetryStuct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mechanics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Mechanics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrack, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrack, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerLocation, METADATA_PARAMS(0, nullptr) }; // 1756572027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrack, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locations_MetaData), NewProp_Locations_MetaData) }; // 1756572027
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Mechanics_Inner = { "Mechanics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMechanic, METADATA_PARAMS(0, nullptr) }; // 3037053307
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Mechanics = { "Mechanics", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrack, Mechanics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mechanics_MetaData), NewProp_Mechanics_MetaData) }; // 3037053307
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Locations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Locations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Mechanics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_Mechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyTelemetryRuntime,
	nullptr,
	&NewStructOps,
	"Track",
	Z_Construct_UScriptStruct_FTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrack_Statics::PropPointers),
	sizeof(FTrack),
	alignof(FTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrack()
{
	if (!Z_Registration_Info_UScriptStruct_Track.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Track.InnerSingleton, Z_Construct_UScriptStruct_FTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Track.InnerSingleton;
}
// End ScriptStruct FTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Structures_EasyTelemetryStuct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerLocation::StaticStruct, Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewStructOps, TEXT("PlayerLocation"), &Z_Registration_Info_UScriptStruct_PlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerLocation), 1756572027U) },
		{ FMechanic::StaticStruct, Z_Construct_UScriptStruct_FMechanic_Statics::NewStructOps, TEXT("Mechanic"), &Z_Registration_Info_UScriptStruct_Mechanic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMechanic), 3037053307U) },
		{ FTimedMechanic::StaticStruct, Z_Construct_UScriptStruct_FTimedMechanic_Statics::NewStructOps, TEXT("TimedMechanic"), &Z_Registration_Info_UScriptStruct_TimedMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedMechanic), 1212837786U) },
		{ FTrack::StaticStruct, Z_Construct_UScriptStruct_FTrack_Statics::NewStructOps, TEXT("Track"), &Z_Registration_Info_UScriptStruct_Track, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrack), 2099923897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Structures_EasyTelemetryStuct_h_570371639(TEXT("/Script/EasyTelemetryRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Structures_EasyTelemetryStuct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestPlugin_Plugins_EasyTelemetry_Source_EasyTelemetryRuntime_Structures_EasyTelemetryStuct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
