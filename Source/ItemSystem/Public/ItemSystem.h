#pragma once

#include "Modules/ModuleManager.h"

class ITEMSYSTEM_API ItemSystemImpl : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();
};