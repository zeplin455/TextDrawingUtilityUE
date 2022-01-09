// Copyright (c) 2021 Zeplin455.

using UnrealBuildTool;
using System.Collections.Generic;

public class TextUtilitiesTarget : TargetRules
{
	public TextUtilitiesTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "TextUtilities" } );
	}
}
