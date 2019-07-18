// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemAssetActions.h"

#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "ItemAsset.h"
#include "Styling/SlateStyle.h"


#define LOCTEXT_NAMESPACE "AssetTypeActions"

uint32 FItemAssetActions::Category = EAssetTypeCategories::Misc;

bool FItemAssetActions::CanFilter()
{
    return true;
}

FText FItemAssetActions::GetName() const
{
    return LOCTEXT("ItemAsset", "Item Asset");
}

FText FItemAssetActions::GetAssetDescription(const FAssetData& AssetData) const
{
    return LOCTEXT("ItemAssetDesc", "An Item that can be created from the Content Browser and loaded at runtime.");
}

FColor FItemAssetActions::GetTypeColor() const
{
    return FColor::Cyan;
}

uint32 FItemAssetActions::GetCategories()
{
    return Category;
}

void FItemAssetActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
    FAssetTypeActions_Base::GetActions(InObjects, MenuBuilder);

    auto ItemAssets = GetTypedWeakObjectPtrs<UItemAsset>(InObjects);
    /*
    MenuBuilder.AddMenuEntry(
        LOCTEXT("ItemAsset_CopyID", "Copy Item ID"),
        LOCTEXT("ItemAsset_CopyIDToolTip", "Copies the database ID number of the currently selected Item to the clipboard."),
        FSlateIcon(),
        FUIAction(
            FExecuteAction::CreateLambda([=] {
                for (auto& ItemAsset : ItemAssets)
                {
                    if (ItemAsset.IsValid() && !ItemAsset->Name.IsEmpty())
                    {
                        //const FString ItemID = ItemAsset->GetID().ToString();
                        //FPlatformApplicationMisc::ClipboardCopy(*ItemID);
                        UE_LOG(LogTemp, Warning, TEXT("Function not yet implemented."));
                        //ItemAsset->PostEditChange();
                        //ItemAsset->MarkPackageDirty();
                    }
                }
            }),
            FCanExecuteAction::CreateLambda([=] {
                return true;
            })
        )
    );*/
}

UClass* FItemAssetActions::GetSupportedClass() const
{
    return UItemAsset::StaticClass();
}

bool FItemAssetActions::HasActions(const TArray<UObject*>& InObjects) const
{
    return true;
}

#undef LOCTEXT_NAMESPACE