// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemAsset.h"

UItemAsset::UItemAsset() {

}

#if WITH_EDITOR
void UItemAsset::PostLoad() {

    Super::PostLoad();
}

void UItemAsset::PostEditChangeProperty(FPropertyChangedEvent& e)
{
    FName PropertyName = (e.Property != NULL) ? e.GetPropertyName() : NAME_None;

    Super::PostEditChangeProperty(e);
}

bool UItemAsset::CanEditChange(const UProperty* InProperty) const
{

    const bool Parent = Super::CanEditChange(InProperty);
    /*
    if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, Weight)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Currency) |
            static_cast<int32>(EItemType::Key)
            )) == 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, Durability)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Currency) |
            static_cast<int32>(EItemType::Key)
            )) == 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, ConcussiveDamage)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Weapon)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, PunctureDamage)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Weapon)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, SlashDamage)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Weapon)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, WieldSlot)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Weapon)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, ConcussiveProtection)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, PunctureProtection)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, SlashProtection)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, WearSlot)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, Insulation)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, WaterResistance)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, FireResistance)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, ShockResistance)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemAsset, Inhibitance)) {
        return Parent && ((static_cast<int32>(Type) & (
            static_cast<int32>(EItemType::Weapon) |
            static_cast<int32>(EItemType::Apparel)
            )) != 0);
    }
    else {
        return Parent;
    }*/
    return Parent;

}
#endif

UItemTypeBase* UItemAsset::AsItemType(const TSubclassOf<UItemTypeBase> TypeClass, bool& IsType) {
    IsType = (Type->IsA(TypeClass) && Type != NULL);
    return Type;
}