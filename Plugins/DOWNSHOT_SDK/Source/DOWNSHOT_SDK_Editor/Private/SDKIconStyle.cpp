// Copyright Epic Games, Inc. All Rights Reserved.

#include "SDKIconStyle.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FSDKIconStyle::StyleInstance = nullptr;

void FSDKIconStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSDKIconStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSDKIconStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SDKStyle"));
	return StyleSetName;
}

const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSDKIconStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SDKStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("DOWNSHOT_SDK")->GetBaseDir() / TEXT("Resources"));
	return Style;
}

void FSDKIconStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSDKIconStyle::Get()
{
	return *StyleInstance;
}
