// Copyright Epic Games, Inc. All Rights Reserved.
#include "DOWNSHOT_SDK_Editor.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "ToolMenus.h"
#include "SlateCore.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "Editor/Blutility/Public/EditorUtilitySubsystem.h"
#include "Editor/EditorEngine.h"
#include "Slate.h"
#include "Misc/InteractiveProcess.h"
#include "Interfaces/IPluginManager.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SDKIconStyle.h"
#include "SDKFunctionCalls.h"



#define LOCTEXT_NAMESPACE "FDOWNSHOT_SDK_EditorModule"

void FDOWNSHOT_SDK_EditorModule::StartupModule()
{
	FSDKIconStyle::Initialize();
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(
		this, &FDOWNSHOT_SDK_EditorModule::RegisterExtension));
}

void FDOWNSHOT_SDK_EditorModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);
	FSDKIconStyle::Shutdown();
}



void FDOWNSHOT_SDK_EditorModule::OpenWindow()
{
	UEditorUtilityWidgetBlueprint* UMGBP = LoadObject<UEditorUtilityWidgetBlueprint>(nullptr, TEXT("/DOWNSHOT_SDK/Editor/SDK_Tool"));
	if (!UMGBP)
	{
		return;
	}

	UClass* BlueprintClass = UMGBP->GeneratedClass;
	if (!BlueprintClass)
	{
		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	if (!EditorUtilitySubsystem)
	{
		return;
	}

	EditorUtilitySubsystem->SpawnAndRegisterTab(UMGBP);
}

void FDOWNSHOT_SDK_EditorModule::RegisterExtension()
{
	FToolMenuOwnerScoped OwnerScoped(this);
	UToolMenu* ToolBar = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
	FToolMenuSection& ToolbarSection = ToolBar->FindOrAddSection("File");
	FUIAction ComboButtonAction;
	ComboButtonAction.ExecuteAction = FExecuteAction::CreateLambda([] {});
	FToolMenuSection& Section = ToolBar->AddSection("DOWNSHOTSection", LOCTEXT("DOWNSHOTSection", "SDK"), FToolMenuInsert("File", EToolMenuInsertType::After));
	auto ComboButton = FToolMenuEntry::InitComboButton(
		"Dropdown",
		ComboButtonAction,
		FOnGetContent::CreateRaw(this, &FDOWNSHOT_SDK_EditorModule::GenerateConetent),
		LOCTEXT("Dropdown", "DOWNSHOT SDK"),
		LOCTEXT("Dropdown_Tooltip", "Use to lanch usefull tools included in the DOWNSHOT SDK."),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "MeshPaint.Fix.Small"),
		false,
		"Dropdown"
	);
	ComboButton.StyleNameOverride = "CalloutToolbar";
	Section.AddEntry(ComboButton);
}

TSharedRef<SWidget> FDOWNSHOT_SDK_EditorModule::GenerateConetent()
{
    FMenuBuilder MenuBuilder(true, nullptr);

    MenuBuilder.AddMenuEntry(
        LOCTEXT("Option1", "Launch SDK Tools Window"),
        LOCTEXT("Option1_Tooltip", "Launch the tools window to help in creating DOWNSHOT mods."),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.OpenContentBrowser.Small"),
        FUIAction(FExecuteAction::CreateRaw(this, &FDOWNSHOT_SDK_EditorModule::OpenWindow))
    );
    return MenuBuilder.MakeWidget();
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDOWNSHOT_SDK_EditorModule, DOWNSHOT_SDK_Editor)