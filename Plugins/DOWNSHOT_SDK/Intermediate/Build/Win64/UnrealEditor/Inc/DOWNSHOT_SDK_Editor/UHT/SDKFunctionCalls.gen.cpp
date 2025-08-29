// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DOWNSHOT_SDK_Editor/Public/SDKFunctionCalls.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDKFunctionCalls() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
DOWNSHOT_SDK_EDITOR_API UClass* Z_Construct_UClass_USDKFunctionCalls();
DOWNSHOT_SDK_EDITOR_API UClass* Z_Construct_UClass_USDKFunctionCalls_NoRegister();
UPackage* Z_Construct_UPackage__Script_DOWNSHOT_SDK_Editor();
// End Cross Module References

// Begin Class USDKFunctionCalls Function CompileMod
struct Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics
{
	struct SDKFunctionCalls_eventCompileMod_Parms
	{
		FString Name;
		int32 platform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_platform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventCompileMod_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventCompileMod_Parms, platform), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::NewProp_platform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "CompileMod", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::SDKFunctionCalls_eventCompileMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::SDKFunctionCalls_eventCompileMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_CompileMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_CompileMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execCompileMod)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_platform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompileMod(Z_Param_Name,Z_Param_platform);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function CompileMod

// Begin Class USDKFunctionCalls Function ConfigureProjectSettings
struct Z_Construct_UFunction_USDKFunctionCalls_ConfigureProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_ConfigureProjectSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "ConfigureProjectSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_ConfigureProjectSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_ConfigureProjectSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USDKFunctionCalls_ConfigureProjectSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_ConfigureProjectSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execConfigureProjectSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureProjectSettings();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function ConfigureProjectSettings

// Begin Class USDKFunctionCalls Function CopyBlankMap
struct Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics
{
	struct SDKFunctionCalls_eventCopyBlankMap_Parms
	{
		FString ModName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventCopyBlankMap_Parms, ModName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModName_MetaData), NewProp_ModName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::NewProp_ModName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "CopyBlankMap", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::SDKFunctionCalls_eventCopyBlankMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::SDKFunctionCalls_eventCopyBlankMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execCopyBlankMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyBlankMap(Z_Param_ModName);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function CopyBlankMap

// Begin Class USDKFunctionCalls Function CopyTemplateMap
struct Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics
{
	struct SDKFunctionCalls_eventCopyTemplateMap_Parms
	{
		FString ModName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventCopyTemplateMap_Parms, ModName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModName_MetaData), NewProp_ModName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::NewProp_ModName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "CopyTemplateMap", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::SDKFunctionCalls_eventCopyTemplateMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::SDKFunctionCalls_eventCopyTemplateMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execCopyTemplateMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyTemplateMap(Z_Param_ModName);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function CopyTemplateMap

// Begin Class USDKFunctionCalls Function CreateModFolder
struct Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics
{
	struct SDKFunctionCalls_eventCreateModFolder_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventCreateModFolder_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "CreateModFolder", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::SDKFunctionCalls_eventCreateModFolder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::SDKFunctionCalls_eventCreateModFolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execCreateModFolder)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateModFolder(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function CreateModFolder

// Begin Class USDKFunctionCalls Function GetModArchiveFolder
struct Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics
{
	struct SDKFunctionCalls_eventGetModArchiveFolder_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventGetModArchiveFolder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "GetModArchiveFolder", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::SDKFunctionCalls_eventGetModArchiveFolder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::SDKFunctionCalls_eventGetModArchiveFolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execGetModArchiveFolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetModArchiveFolder();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function GetModArchiveFolder

// Begin Class USDKFunctionCalls Function GetModIntermidateFolder
struct Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics
{
	struct SDKFunctionCalls_eventGetModIntermidateFolder_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventGetModIntermidateFolder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "GetModIntermidateFolder", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::SDKFunctionCalls_eventGetModIntermidateFolder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::SDKFunctionCalls_eventGetModIntermidateFolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execGetModIntermidateFolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetModIntermidateFolder();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function GetModIntermidateFolder

// Begin Class USDKFunctionCalls Function GetModPakFolder
struct Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics
{
	struct SDKFunctionCalls_eventGetModPakFolder_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventGetModPakFolder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "GetModPakFolder", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::SDKFunctionCalls_eventGetModPakFolder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::SDKFunctionCalls_eventGetModPakFolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execGetModPakFolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetModPakFolder();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function GetModPakFolder

// Begin Class USDKFunctionCalls Function GetSDKVersion
struct Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics
{
	struct SDKFunctionCalls_eventGetSDKVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventGetSDKVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "GetSDKVersion", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::SDKFunctionCalls_eventGetSDKVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::SDKFunctionCalls_eventGetSDKVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execGetSDKVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSDKVersion();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function GetSDKVersion

// Begin Class USDKFunctionCalls Function InstallToPC
struct Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics
{
	struct SDKFunctionCalls_eventInstallToPC_Parms
	{
		FString ModName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventInstallToPC_Parms, ModName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModName_MetaData), NewProp_ModName_MetaData) };
void Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDKFunctionCalls_eventInstallToPC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDKFunctionCalls_eventInstallToPC_Parms), &Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::NewProp_ModName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "InstallToPC", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::SDKFunctionCalls_eventInstallToPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::SDKFunctionCalls_eventInstallToPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_InstallToPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_InstallToPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execInstallToPC)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InstallToPC(Z_Param_ModName);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function InstallToPC

// Begin Class USDKFunctionCalls Function InstallToStandaloneHMD
struct Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics
{
	struct SDKFunctionCalls_eventInstallToStandaloneHMD_Parms
	{
		FString ModName;
		FString abdpath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_abdpath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_abdpath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventInstallToStandaloneHMD_Parms, ModName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModName_MetaData), NewProp_ModName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_abdpath = { "abdpath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventInstallToStandaloneHMD_Parms, abdpath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_abdpath_MetaData), NewProp_abdpath_MetaData) };
void Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDKFunctionCalls_eventInstallToStandaloneHMD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDKFunctionCalls_eventInstallToStandaloneHMD_Parms), &Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_ModName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_abdpath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "InstallToStandaloneHMD", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::SDKFunctionCalls_eventInstallToStandaloneHMD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::SDKFunctionCalls_eventInstallToStandaloneHMD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execInstallToStandaloneHMD)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModName);
	P_GET_PROPERTY(FStrProperty,Z_Param_abdpath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InstallToStandaloneHMD(Z_Param_ModName,Z_Param_abdpath);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function InstallToStandaloneHMD

// Begin Class USDKFunctionCalls Function IsConfiguredCorrectly
struct Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics
{
	struct SDKFunctionCalls_eventIsConfiguredCorrectly_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDKFunctionCalls_eventIsConfiguredCorrectly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDKFunctionCalls_eventIsConfiguredCorrectly_Parms), &Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "IsConfiguredCorrectly", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::SDKFunctionCalls_eventIsConfiguredCorrectly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::SDKFunctionCalls_eventIsConfiguredCorrectly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execIsConfiguredCorrectly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConfiguredCorrectly();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function IsConfiguredCorrectly

// Begin Class USDKFunctionCalls Function OpenFileExplorer
struct Z_Construct_UFunction_USDKFunctionCalls_OpenFileExplorer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_OpenFileExplorer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "OpenFileExplorer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_OpenFileExplorer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_OpenFileExplorer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USDKFunctionCalls_OpenFileExplorer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_OpenFileExplorer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execOpenFileExplorer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenFileExplorer();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function OpenFileExplorer

// Begin Class USDKFunctionCalls Function ReadConfigValue
struct Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics
{
	struct SDKFunctionCalls_eventReadConfigValue_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventReadConfigValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventReadConfigValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "ReadConfigValue", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::SDKFunctionCalls_eventReadConfigValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::SDKFunctionCalls_eventReadConfigValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execReadConfigValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ReadConfigValue(Z_Param_Key);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function ReadConfigValue

// Begin Class USDKFunctionCalls Function RestartEditor
struct Z_Construct_UFunction_USDKFunctionCalls_RestartEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_RestartEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "RestartEditor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_RestartEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_RestartEditor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USDKFunctionCalls_RestartEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_RestartEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execRestartEditor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartEditor();
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function RestartEditor

// Begin Class USDKFunctionCalls Function WriteConfigValue
struct Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics
{
	struct SDKFunctionCalls_eventWriteConfigValue_Parms
	{
		FString Value;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDKFunctions" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventWriteConfigValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDKFunctionCalls_eventWriteConfigValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDKFunctionCalls_eventWriteConfigValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDKFunctionCalls_eventWriteConfigValue_Parms), &Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDKFunctionCalls, nullptr, "WriteConfigValue", nullptr, nullptr, Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::SDKFunctionCalls_eventWriteConfigValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::SDKFunctionCalls_eventWriteConfigValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDKFunctionCalls::execWriteConfigValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteConfigValue(Z_Param_Value,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USDKFunctionCalls Function WriteConfigValue

// Begin Class USDKFunctionCalls
void USDKFunctionCalls::StaticRegisterNativesUSDKFunctionCalls()
{
	UClass* Class = USDKFunctionCalls::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompileMod", &USDKFunctionCalls::execCompileMod },
		{ "ConfigureProjectSettings", &USDKFunctionCalls::execConfigureProjectSettings },
		{ "CopyBlankMap", &USDKFunctionCalls::execCopyBlankMap },
		{ "CopyTemplateMap", &USDKFunctionCalls::execCopyTemplateMap },
		{ "CreateModFolder", &USDKFunctionCalls::execCreateModFolder },
		{ "GetModArchiveFolder", &USDKFunctionCalls::execGetModArchiveFolder },
		{ "GetModIntermidateFolder", &USDKFunctionCalls::execGetModIntermidateFolder },
		{ "GetModPakFolder", &USDKFunctionCalls::execGetModPakFolder },
		{ "GetSDKVersion", &USDKFunctionCalls::execGetSDKVersion },
		{ "InstallToPC", &USDKFunctionCalls::execInstallToPC },
		{ "InstallToStandaloneHMD", &USDKFunctionCalls::execInstallToStandaloneHMD },
		{ "IsConfiguredCorrectly", &USDKFunctionCalls::execIsConfiguredCorrectly },
		{ "OpenFileExplorer", &USDKFunctionCalls::execOpenFileExplorer },
		{ "ReadConfigValue", &USDKFunctionCalls::execReadConfigValue },
		{ "RestartEditor", &USDKFunctionCalls::execRestartEditor },
		{ "WriteConfigValue", &USDKFunctionCalls::execWriteConfigValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USDKFunctionCalls);
UClass* Z_Construct_UClass_USDKFunctionCalls_NoRegister()
{
	return USDKFunctionCalls::StaticClass();
}
struct Z_Construct_UClass_USDKFunctionCalls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SDKFunctionCalls.h" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileInProgress_MetaData[] = {
		{ "Category", "SDKVaribles" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookInProgress_MetaData[] = {
		{ "Category", "SDKVaribles" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastOutput_MetaData[] = {
		{ "Category", "SDKVaribles" },
		{ "ModuleRelativePath", "Public/SDKFunctionCalls.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CompileInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompileInProgress;
	static void NewProp_CookInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CookInProgress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USDKFunctionCalls_CompileMod, "CompileMod" }, // 4292385737
		{ &Z_Construct_UFunction_USDKFunctionCalls_ConfigureProjectSettings, "ConfigureProjectSettings" }, // 3157095404
		{ &Z_Construct_UFunction_USDKFunctionCalls_CopyBlankMap, "CopyBlankMap" }, // 3447455020
		{ &Z_Construct_UFunction_USDKFunctionCalls_CopyTemplateMap, "CopyTemplateMap" }, // 352613961
		{ &Z_Construct_UFunction_USDKFunctionCalls_CreateModFolder, "CreateModFolder" }, // 1850755564
		{ &Z_Construct_UFunction_USDKFunctionCalls_GetModArchiveFolder, "GetModArchiveFolder" }, // 3412286487
		{ &Z_Construct_UFunction_USDKFunctionCalls_GetModIntermidateFolder, "GetModIntermidateFolder" }, // 4180695179
		{ &Z_Construct_UFunction_USDKFunctionCalls_GetModPakFolder, "GetModPakFolder" }, // 833643720
		{ &Z_Construct_UFunction_USDKFunctionCalls_GetSDKVersion, "GetSDKVersion" }, // 1819481071
		{ &Z_Construct_UFunction_USDKFunctionCalls_InstallToPC, "InstallToPC" }, // 1350585512
		{ &Z_Construct_UFunction_USDKFunctionCalls_InstallToStandaloneHMD, "InstallToStandaloneHMD" }, // 1828520428
		{ &Z_Construct_UFunction_USDKFunctionCalls_IsConfiguredCorrectly, "IsConfiguredCorrectly" }, // 3462386188
		{ &Z_Construct_UFunction_USDKFunctionCalls_OpenFileExplorer, "OpenFileExplorer" }, // 595133986
		{ &Z_Construct_UFunction_USDKFunctionCalls_ReadConfigValue, "ReadConfigValue" }, // 4214615425
		{ &Z_Construct_UFunction_USDKFunctionCalls_RestartEditor, "RestartEditor" }, // 3957284085
		{ &Z_Construct_UFunction_USDKFunctionCalls_WriteConfigValue, "WriteConfigValue" }, // 2006477820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDKFunctionCalls>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CompileInProgress_SetBit(void* Obj)
{
	((USDKFunctionCalls*)Obj)->CompileInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CompileInProgress = { "CompileInProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USDKFunctionCalls), &Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CompileInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileInProgress_MetaData), NewProp_CompileInProgress_MetaData) };
void Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CookInProgress_SetBit(void* Obj)
{
	((USDKFunctionCalls*)Obj)->CookInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CookInProgress = { "CookInProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USDKFunctionCalls), &Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CookInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookInProgress_MetaData), NewProp_CookInProgress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_LastOutput = { "LastOutput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDKFunctionCalls, LastOutput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastOutput_MetaData), NewProp_LastOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDKFunctionCalls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CompileInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_CookInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDKFunctionCalls_Statics::NewProp_LastOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDKFunctionCalls_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USDKFunctionCalls_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DOWNSHOT_SDK_Editor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDKFunctionCalls_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDKFunctionCalls_Statics::ClassParams = {
	&USDKFunctionCalls::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USDKFunctionCalls_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USDKFunctionCalls_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDKFunctionCalls_Statics::Class_MetaDataParams), Z_Construct_UClass_USDKFunctionCalls_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDKFunctionCalls()
{
	if (!Z_Registration_Info_UClass_USDKFunctionCalls.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDKFunctionCalls.OuterSingleton, Z_Construct_UClass_USDKFunctionCalls_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDKFunctionCalls.OuterSingleton;
}
template<> DOWNSHOT_SDK_EDITOR_API UClass* StaticClass<USDKFunctionCalls>()
{
	return USDKFunctionCalls::StaticClass();
}
USDKFunctionCalls::USDKFunctionCalls(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDKFunctionCalls);
USDKFunctionCalls::~USDKFunctionCalls() {}
// End Class USDKFunctionCalls

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cmcle_Downloads_DOWNSHOT_SDK_HostProject_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDKFunctionCalls, USDKFunctionCalls::StaticClass, TEXT("USDKFunctionCalls"), &Z_Registration_Info_UClass_USDKFunctionCalls, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDKFunctionCalls), 3138802713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cmcle_Downloads_DOWNSHOT_SDK_HostProject_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_1816943303(TEXT("/Script/DOWNSHOT_SDK_Editor"),
	Z_CompiledInDeferFile_FID_Users_cmcle_Downloads_DOWNSHOT_SDK_HostProject_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cmcle_Downloads_DOWNSHOT_SDK_HostProject_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
