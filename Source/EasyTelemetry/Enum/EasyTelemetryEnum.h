#pragma once

#include "CoreMinimal.h"
#include "EasyTelemetryEnum.generated.h"

UENUM(BlueprintType)
enum class DrawType : uint8
{
	Default UMETA(DisplayName = "Default"),
	Trajectory UMETA(DisplayName = "Trajectory"),
	Mechanic UMETA(DisplayName = "Mechanic"),
	Both UMETA(DisplayName = "Both")
};