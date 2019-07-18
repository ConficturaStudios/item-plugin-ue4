#include "ItemSystemEditor.h"
#include "ItemSystemEditorPrivatePCH.h"

#include "Developer/AssetTools/Public/IAssetTools.h"
#include "Developer/AssetTools/Public/AssetToolsModule.h"
#include "ItemAssetActions.h"

#define LOCTEXT_NAMESPACE "ItemSystemEditor"

void ItemSystemEditorImpl::StartupModule()
{
    IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

    EAssetTypeCategories::Type CustomAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Confictura")), LOCTEXT("Confictura", "Confictura Studios"));
    FItemAssetActions::Category = CustomAssetCategory;

    {
        TSharedRef<IAssetTypeActions> ACT_UItemAsset = MakeShareable(new FItemAssetActions);
        AssetTools.RegisterAssetTypeActions(ACT_UItemAsset);
    }
}

void ItemSystemEditorImpl::ShutdownModule()
{
}

IMPLEMENT_MODULE(ItemSystemEditorImpl, ItemSystemEditor)

#undef LOCTEXT_NAMESPACE