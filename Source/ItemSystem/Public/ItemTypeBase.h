// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemTypeBase.generated.h"

/**
 * A framework used to define a new type of item. This class should be inherited and have all desired properties attached in its child.
 */
UCLASS(Abstract, Blueprintable, BlueprintType, EditInlineNew, DefaultToInstanced, hidecategories = (Object))
class ITEMSYSTEM_API UItemTypeBase : public UObject
{
	GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Default)
    bool CanEditItemProperty(const FName PropertyName) const;


    // Editor Functions
#if WITH_EDITOR
    virtual bool CanEditChange(const UProperty* InProperty) const override;
#endif

};
