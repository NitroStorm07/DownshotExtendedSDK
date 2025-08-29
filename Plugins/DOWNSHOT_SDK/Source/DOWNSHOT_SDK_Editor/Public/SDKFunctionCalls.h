// Copyright 2024 CMVR Game Studios LLC. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"

#include "SDKFunctionCalls.generated.h"

/**
 * 
 */
UCLASS()
class DOWNSHOT_SDK_EDITOR_API USDKFunctionCalls : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	void ConfigureProjectSettings();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	void CreateModFolder(const FString& Name);

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	bool WriteConfigValue(const FString& Value, const FString& Key);

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	bool IsConfiguredCorrectly();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	FString ReadConfigValue(const FString& Key);

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	FString GetModArchiveFolder();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	FString GetModPakFolder();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	FString GetModIntermidateFolder();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	void CompileMod(const FString& Name, int platform);

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	void CopyTemplateMap(const FString& ModName);

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	void CopyBlankMap(const FString& ModName);

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	void RestartEditor();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	void OpenFileExplorer();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	FString GetSDKVersion();

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	bool InstallToPC(const FString& ModName);

	UFUNCTION(BlueprintCallable, Category = "SDKFunctions")
	bool InstallToStandaloneHMD(const FString& ModName, const FString& abdpath);

	UPROPERTY(BlueprintReadOnly, Category = "SDKVaribles")
	bool CompileInProgress = false;

	UPROPERTY(BlueprintReadOnly, Category = "SDKVaribles")
	bool CookInProgress = false;

	UPROPERTY(BlueprintReadOnly, Category = "SDKVaribles")
	FString LastOutput;

private:

	void DisableLiveCoding();

	void PackageAllAssets(const FString& ModName, int platform);

	void DeleteFolderIfExists(const FString& FolderPath);

	void FinishCompile(const FString& ModName, const FString& Platform, const TArray<FString>& Tags);

	void ZipFolder(const FString& FolderPath, const FString& OutputZipFile);

	void DisablePluginsInUProject(const FString& UProjectFilePath, const TArray<FString>& PluginsToDisable);

	void CreateJsonFile(const FString& FilePath, const FString& Platform, const FString& Mount, const TArray<FString>& Tags);
	
};
