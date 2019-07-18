using UnrealBuildTool;
using System.IO;

public class ItemSystem : ModuleRules
{
    public ItemSystem(ReadOnlyTargetRules Target) : base(Target)
    {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
        PrivateIncludePaths.AddRange(new string[] { "ItemSystem/Private" });
        PublicIncludePaths.AddRange(new string[] { "ItemSystem/Public" });

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		
		PrivateDependencyModuleNames.AddRange(new string[] { });
		
    }
}