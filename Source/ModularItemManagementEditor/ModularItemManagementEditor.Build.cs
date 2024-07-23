using System.IO;
using UnrealBuildTool;

/**
 * Build rules for the ModularItemManagementEditor module.
 */
public class ModularItemManagementEditor : ModuleRules
{
	public ModularItemManagementEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PrecompileForTargets = PrecompileTargetsType.Any;

		PublicIncludePaths.AddRange(
			new string[] {
				// Add public include paths required here
			}
		);
				
		PrivateIncludePaths.AddRange(
			new string[] {
				// Add other private include paths required here
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"StructUtils",
				"GameplayTags",
				"Engine",
				"JsonUtilities",
				"Json",
				"UMG",
				"Slate",
				"SlateCore",
				"ModularItemManagement",
				"UnrealEd",
				"AssetTools",
				"AssetRegistry",
				"EditorStyle"
				// Add other public dependencies that you statically link with here
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Slate",
				"SlateCore",
				"DeveloperSettings",
				// Add private dependencies that you statically link with here
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// Add any modules that your module loads dynamically here
			}
		);
	}
}