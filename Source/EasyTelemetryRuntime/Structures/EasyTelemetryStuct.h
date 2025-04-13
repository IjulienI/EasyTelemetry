#pragma once

#include "CoreMinimal.h"
#include "EasyTelemetryStuct.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLocation
{
	GENERATED_USTRUCT_BODY()

	FPlayerLocation()
	: Location(FVector::ZeroVector)
	, TimeStemp(0.f)
	{}

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	FVector Location;

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	float TimeStemp;
};

USTRUCT(BlueprintType)
struct FMechanic
{
	GENERATED_USTRUCT_BODY()

	FMechanic()
	: Mechanic(TEXT(""))
	, Location(FVector::ZeroVector)
	, TimeStemp(0.f),
	Color(FColor::Green)
	{}

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	FString Mechanic;

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	FVector Location;

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	float TimeStemp;

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	FColor Color;
};

USTRUCT(BlueprintType)
struct FTrack
{
	GENERATED_USTRUCT_BODY()

	FTrack()
	: Name(TEXT("")),
	Color(FColor::Green),
	Locations(TArray<FPlayerLocation>()),
	Mechanics(TArray<FMechanic>())
	{}
	
	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	FColor Color;

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	TArray<FPlayerLocation> Locations;

	UPROPERTY(BlueprintReadWrite, Category = "EasyTelemetry|Data")
	TArray<FMechanic> Mechanics;
	
};