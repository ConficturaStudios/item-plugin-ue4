// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

UENUM(BlueprintType, Meta = (Bitflags))
enum class EItemWieldSlot : uint8
{
    RHand    UMETA(DisplayName = "Right Hand"),
    LHand    UMETA(DisplayName = "Left Hand")
};