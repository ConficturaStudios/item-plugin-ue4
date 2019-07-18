#pragma once

#include "Modules/ModuleManager.h"

class ITEMSYSTEMEDITOR_API ItemSystemEditorImpl : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();

};