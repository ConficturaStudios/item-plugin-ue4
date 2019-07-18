// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"

#include "ItemAssetFactoryNew.generated.h"

/**
 * The factory class for generating a new ItemAsset from the Content Browser.
 */
UCLASS(hidecategories = Object)
class ITEMSYSTEMEDITOR_API UItemAssetFactoryNew : public UFactory
{
    GENERATED_UCLASS_BODY()

public:

    virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
    virtual bool ShouldShowInNewMenu() const override;
    //virtual uint32 GetMenuCategories() const override;

};
