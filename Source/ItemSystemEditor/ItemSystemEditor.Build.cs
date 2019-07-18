using UnrealBuildTool;
using System.IO;

public class ItemSystemEditor : ModuleRules
{
    public ItemSystemEditor(ReadOnlyTargetRules Target) : base(Target)
    {
		//PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
        PrivateIncludePaths.AddRange(new string[] { "ItemSystemEditor/Private" });
        PublicIncludePaths.AddRange(new string[] { "ItemSystemEditor/Public" });

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AssetTools", "ItemSystem", "ApplicationCore" });
		
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "UnrealEd" });
		
    }
}