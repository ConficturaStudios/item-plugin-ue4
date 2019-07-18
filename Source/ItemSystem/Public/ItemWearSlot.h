// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

UENUM(BlueprintType, Meta = (Bitflags))
enum class EItemWearSlot : uint8
{
    RHand       UMETA(DisplayName = "Right Hand"),
    LHand       UMETA(DisplayName = "Left Hand"),

    RHandRing0  UMETA(DisplayName = "Right Hand Ring - Thumb"),
    RHandRing1  UMETA(DisplayName = "Right Hand Ring - Index"),
    RHandRing2  UMETA(DisplayName = "Right Hand Ring - Middle"),
    RHandRing3  UMETA(DisplayName = "Right Hand Ring - Ring"),
    RHandRing4  UMETA(DisplayName = "Right Hand Ring - Little"),

    LHandRing0  UMETA(DisplayName = "Left Hand Ring - Thumb"),
    LHandRing1  UMETA(DisplayName = "Left Hand Ring - Index"),
    LHandRing2  UMETA(DisplayName = "Left Hand Ring - Middle"),
    LHandRing3  UMETA(DisplayName = "Left Hand Ring - Ring"),
    LHandRing4  UMETA(DisplayName = "Left Hand Ring - Little"),

    RArm0       UMETA(DisplayName = "Right Arm Layer 0"),
    RArm1       UMETA(DisplayName = "Right Arm Layer 1"),
    LArm0       UMETA(DisplayName = "Left Arm Layer 0"),
    LArm1       UMETA(DisplayName = "Left Arm Layer 1"),

    Torso0      UMETA(DisplayName = "Torso Layer 0"),
    Torso1      UMETA(DisplayName = "Torso Layer 1"),
    Torso2      UMETA(DisplayName = "Torso Layer 2"),

    Legs        UMETA(DisplayName = "Legs"),
    RLeg        UMETA(DisplayName = "Right Leg"),
    LLeg        UMETA(DisplayName = "Left Leg"),

    RFoot0      UMETA(DisplayName = "Right Foot Layer 0"),
    RFoot1      UMETA(DisplayName = "Right Foot Layer 1"),
    LFoot0      UMETA(DisplayName = "Left Foot Layer 0"),
    LFoot1      UMETA(DisplayName = "Left Foot Layer 1"),

    Necklace    UMETA(DisplayName = "Necklace"),
    Neck        UMETA(DisplayName = "Neck"),

    Face        UMETA(DisplayName = "Face"),
    REye        UMETA(DisplayName = "Right Eye"),
    LEye        UMETA(DisplayName = "Left Eye"),
    Helm        UMETA(DisplayName = "Helm"),
    Scalp       UMETA(DisplayName = "Scalp"),
};