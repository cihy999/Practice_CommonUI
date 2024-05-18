// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LearnCommonUI : ModuleRules
{
	public LearnCommonUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
            "GameplayTags",
            "CommonUI",
            "CommonInput"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Slate"
        });
    }
}
