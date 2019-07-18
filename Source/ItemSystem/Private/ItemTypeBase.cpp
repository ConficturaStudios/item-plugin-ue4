// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemTypeBase.h"

bool UItemTypeBase::CanEditItemProperty_Implementation(const FName PropertyName) const {
    return true;
}

#if WITH_EDITOR
bool UItemTypeBase::CanEditChange(const UProperty* InProperty) const
{

    const bool Parent = Super::CanEditChange(InProperty);
    return Parent && CanEditItemProperty(InProperty->GetFName());

}
#endif