// Copyright (c) 2021 Zeplin455.

using UnrealBuildTool;
using System.Collections.Generic;

public class TextUtilitiesEditorTarget : TargetRules
{
	public TextUtilitiesEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "TextUtilities" } );
	}
}
