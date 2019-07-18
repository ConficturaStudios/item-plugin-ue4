// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Classes/Engine/StaticMesh.h"

#include "ItemTypeBase.h"
#include "ItemWieldSlot.h"
#include "ItemWearSlot.h"

#include "ItemAsset.generated.h"

/**
 * An Item that can be created from the Content Browser and loaded at runtime.
 */
UCLASS(BlueprintType, hidecategories = (Object))
class ITEMSYSTEM_API UItemAsset : public UObject
{
    GENERATED_BODY()

public:

    // General Properties

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = Default)
    FString Name = "Item";

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = Default, Meta = (MultiLine = "true"))
    FText Description;
    /*
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = Default)
    EItemType Type = EItemType::Misc;*/

    UPROPERTY(BlueprintReadOnly, EditAnywhere,Instanced, Category = Default)
    UItemTypeBase* Type;

    // Constructor

    UItemAsset();

    // Editor Functions
#if WITH_EDITOR
    virtual void PostLoad() override;
    virtual void PostEditChangeProperty(FPropertyChangedEvent& e) override;
    virtual bool CanEditChange(const UProperty* InProperty) const override;
#endif

    // Member Functions

    // Blueprint Functions

    UFUNCTION(BlueprintCallable, Category = Default, Meta = (DeterminesOutputType = "TypeClass"))
    UItemTypeBase* AsItemType(const TSubclassOf<UItemTypeBase> TypeClass, bool& IsType);

private:


};