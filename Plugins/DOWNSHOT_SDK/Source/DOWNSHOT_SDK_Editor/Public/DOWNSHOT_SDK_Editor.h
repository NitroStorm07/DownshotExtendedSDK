// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Async/AsyncWork.h"

class FDOWNSHOT_SDK_EditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	void OpenWindow();
	void RegisterExtension();
	TSharedRef<SWidget> GenerateConetent();
};

