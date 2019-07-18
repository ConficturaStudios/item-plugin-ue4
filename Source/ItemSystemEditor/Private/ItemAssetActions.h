// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AssetTypeActions_Base.h"
#include "Templates/SharedPointer.h"

class ISlateStyle;

/**
 * Implements asset actions for ItemAssets
 */
class FItemAssetActions
    : public FAssetTypeActions_Base
{

    friend class ItemSystemEditorImpl;

public:

    virtual bool CanFilter() override;
    virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;
    virtual uint32 GetCategories() override;
    virtual FText GetName() const override;
    virtual FText GetAssetDescription(const FAssetData& AssetData) const override;
    virtual UClass* GetSupportedClass() const override;
    virtual FColor GetTypeColor() const override;
    virtual bool HasActions(const TArray<UObject*>& InObjects) const override;


private:

    static uint32 Category;

};
