// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemAssetFactoryNew.h"
#include "ItemAsset.h"
#include "AssetTypeCategories.h"


UItemAssetFactoryNew::UItemAssetFactoryNew(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    SupportedClass = UItemAsset::StaticClass();
    bCreateNew = true;
    bEditAfterNew = true;
}

UObject* UItemAssetFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UItemAsset>(InParent, InClass, InName, Flags);
}


bool UItemAssetFactoryNew::ShouldShowInNewMenu() const
{
    return true;
}
/*
uint32 UItemAssetFactoryNew::GetMenuCategories() const
{
    return EAssetTypeCategories::Blueprint;
}*/