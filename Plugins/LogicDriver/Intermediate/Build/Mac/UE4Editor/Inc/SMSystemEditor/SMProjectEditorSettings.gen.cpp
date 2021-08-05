// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Configuration/SMProjectEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMProjectEditorSettings() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMProjectEditorSettings_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMProjectEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	void USMProjectEditorSettings::StaticRegisterNativesUSMProjectEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_USMProjectEditorSettings_NoRegister()
	{
		return USMProjectEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USMProjectEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstalledVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstalledVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateAssetsOnStartup_MetaData[];
#endif
		static void NewProp_bUpdateAssetsOnStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateAssetsOnStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayAssetUpdateProgress_MetaData[];
#endif
		static void NewProp_bDisplayAssetUpdateProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayAssetUpdateProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayUpdateNotification_MetaData[];
#endif
		static void NewProp_bDisplayUpdateNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayUpdateNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayMemoryLimitsOnCompile_MetaData[];
#endif
		static void NewProp_bDisplayMemoryLimitsOnCompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayMemoryLimitsOnCompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysDisplayStructMemoryUsage_MetaData[];
#endif
		static void NewProp_bAlwaysDisplayStructMemoryUsage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDisplayStructMemoryUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructMemoryLimitWarningThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StructMemoryLimitWarningThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidateInstanceOnCompile_MetaData[];
#endif
		static void NewProp_bValidateInstanceOnCompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidateInstanceOnCompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnIfChildrenAreOutOfDate_MetaData[];
#endif
		static void NewProp_bWarnIfChildrenAreOutOfDate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnIfChildrenAreOutOfDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConfigureNewConduitsAsTransitions_MetaData[];
#endif
		static void NewProp_bConfigureNewConduitsAsTransitions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConfigureNewConduitsAsTransitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBlueprintToolbarExtenders_MetaData[];
#endif
		static void NewProp_bEnableBlueprintToolbarExtenders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBlueprintToolbarExtenders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBlueprintMenuExtenders_MetaData[];
#endif
		static void NewProp_bEnableBlueprintMenuExtenders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBlueprintMenuExtenders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMProjectEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Configuration/SMProjectEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion = { "InstalledVersion", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, InstalledVersion), METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "Comment", "/**\n\x09 * Automatically update assets saved by older versions to the most current version. It is strongly recommended to leave this on.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Automatically update assets saved by older versions to the most current version. It is strongly recommended to leave this on." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bUpdateAssetsOnStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup = { "bUpdateAssetsOnStartup", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "Comment", "/**\n\x09 * Display a progress bar when updating assets to a new version.\n\x09 */" },
		{ "EditCondition", "bUpdateAssetsOnStartup" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Display a progress bar when updating assets to a new version." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDisplayAssetUpdateProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress = { "bDisplayAssetUpdateProgress", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "Comment", "/**\n\x09 * Display a popup with a link to the patch notes when a new version is detected.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Display a popup with a link to the patch notes when a new version is detected." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDisplayUpdateNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification = { "bDisplayUpdateNotification", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_MetaData[] = {
		{ "Category", "Validation|Memory" },
		{ "Comment", "/**\n\x09 * Warn if approaching Blueprint memory limits on a compile.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Warn if approaching Blueprint memory limits on a compile." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDisplayMemoryLimitsOnCompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile = { "bDisplayMemoryLimitsOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_MetaData[] = {
		{ "Category", "Validation|Memory" },
		{ "Comment", "/**\n\x09 * Display the used struct memory as an info message on compile. \n\x09 */" },
		{ "EditCondition", "bDisplayMemoryLimitsOnCompile" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Display the used struct memory as an info message on compile." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bAlwaysDisplayStructMemoryUsage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage = { "bAlwaysDisplayStructMemoryUsage", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold_MetaData[] = {
		{ "Category", "Validation|Memory" },
		{ "Comment", "/**\n\x09 * The percent of used struct memory that must be reached before a warning is triggered.\n\x09 */" },
		{ "EditCondition", "bDisplayMemoryLimitsOnCompile" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "The percent of used struct memory that must be reached before a warning is triggered." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold = { "StructMemoryLimitWarningThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, StructMemoryLimitWarningThreshold), METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09 * Perform additional validation when compiling the state machine default object by attempting a low level instantiation.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Perform additional validation when compiling the state machine default object by attempting a low level instantiation." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bValidateInstanceOnCompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile = { "bValidateInstanceOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09 * Children which reference a parent state machine graph risk being out of date if a package the parent references is modified.\n\x09 * Compiling the package will signal that affected state machine children need to be compiled, however if you start a PIE session\n\x09 * instead of pressing the compile button, the children may not be updated. In this case the state machine compiler will attempt to warn you.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Children which reference a parent state machine graph risk being out of date if a package the parent references is modified.\nCompiling the package will signal that affected state machine children need to be compiled, however if you start a PIE session\ninstead of pressing the compile button, the children may not be updated. In this case the state machine compiler will attempt to warn you." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bWarnIfChildrenAreOutOfDate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate = { "bWarnIfChildrenAreOutOfDate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_MetaData[] = {
		{ "Category", "Conduits" },
		{ "Comment", "/**\n\x09 * Newly placed conduits will automatically be configured as transitions.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Newly placed conduits will automatically be configured as transitions." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bConfigureNewConduitsAsTransitions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions = { "bConfigureNewConduitsAsTransitions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_MetaData[] = {
		{ "Category", "Plugin Compatibility" },
		{ "Comment", "/**\n\x09 * Add all Kismet toolbar extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Add all Kismet toolbar extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bEnableBlueprintToolbarExtenders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders = { "bEnableBlueprintToolbarExtenders", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_MetaData[] = {
		{ "Category", "Plugin Compatibility" },
		{ "Comment", "/**\n\x09 * Add all Kismet menu extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Add all Kismet menu extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bEnableBlueprintMenuExtenders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders = { "bEnableBlueprintMenuExtenders", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMProjectEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMProjectEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMProjectEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMProjectEditorSettings_Statics::ClassParams = {
		&USMProjectEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMProjectEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMProjectEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMProjectEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMProjectEditorSettings, 977222404);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMProjectEditorSettings>()
	{
		return USMProjectEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMProjectEditorSettings(Z_Construct_UClass_USMProjectEditorSettings, &USMProjectEditorSettings::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMProjectEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMProjectEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
