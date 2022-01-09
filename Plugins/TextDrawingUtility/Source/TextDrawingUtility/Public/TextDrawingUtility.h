// Copyright (c) 2021 Zeplin455.

#pragma once

#include "Modules/ModuleManager.h"

class FTextDrawingUtilityModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
