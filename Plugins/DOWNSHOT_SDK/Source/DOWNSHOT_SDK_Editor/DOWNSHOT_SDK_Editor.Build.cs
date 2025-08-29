// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using UnrealBuildTool.Rules;

public class DOWNSHOT_SDK_Editor : ModuleRules
{
	public DOWNSHOT_SDK_Editor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "Blutility",
                "Projects",
                "CoreUObject",
                "SlateCore",
                "Slate",
                "EditorStyle",
                "Engine",
                "ToolMenus",
				"UnrealEd",
				"UMG",
				"UMGEditor",
                "JsonUtilities",
                "LevelEditor",
                "Json",
                "AssetRegistry"
            }
			);




        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
