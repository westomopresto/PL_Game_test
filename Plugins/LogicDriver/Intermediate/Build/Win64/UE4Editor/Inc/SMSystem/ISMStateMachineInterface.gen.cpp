// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/ISMStateMachineInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMStateMachineInterface() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstanceInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstanceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInterface();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface();
// End Cross Module References
	static UEnum* ESMNetworkConfigurationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMNetworkConfigurationType"));
		}
		return Singleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMNetworkConfigurationType>()
	{
		return ESMNetworkConfigurationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMNetworkConfigurationType(ESMNetworkConfigurationType_StaticEnum, TEXT("/Script/SMSystem"), TEXT("ESMNetworkConfigurationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Hash() { return 3778017930U; }
	UEnum* Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMNetworkConfigurationType"), 0, Get_Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SM_Client", (int64)SM_Client },
				{ "SM_Server", (int64)SM_Server },
				{ "SM_ClientAndServer", (int64)SM_ClientAndServer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
				{ "SM_Client.DisplayName", "Client" },
				{ "SM_Client.Name", "SM_Client" },
				{ "SM_ClientAndServer.DisplayName", "ClientAndServer" },
				{ "SM_ClientAndServer.Name", "SM_ClientAndServer" },
				{ "SM_Server.DisplayName", "Server" },
				{ "SM_Server.Name", "SM_Server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
				nullptr,
				"ESMNetworkConfigurationType",
				"ESMNetworkConfigurationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USMInstanceInterface::StaticRegisterNativesUSMInstanceInterface()
	{
	}
	UClass* Z_Construct_UClass_USMInstanceInterface_NoRegister()
	{
		return USMInstanceInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMInstanceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMInstanceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstanceInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMInstanceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMInstanceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceInterface_Statics::ClassParams = {
		&USMInstanceInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMInstanceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMInstanceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMInstanceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMInstanceInterface, 3667734272);
	template<> SMSYSTEM_API UClass* StaticClass<USMInstanceInterface>()
	{
		return USMInstanceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMInstanceInterface(Z_Construct_UClass_USMInstanceInterface, &USMInstanceInterface::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMInstanceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceInterface);
	void USMStateMachineInterface::StaticRegisterNativesUSMStateMachineInterface()
	{
	}
	UClass* Z_Construct_UClass_USMStateMachineInterface_NoRegister()
	{
		return USMStateMachineInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMStateMachineInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateMachineInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateMachineInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMStateMachineInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMStateMachineInterface_Statics::ClassParams = {
		&USMStateMachineInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateMachineInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateMachineInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateMachineInterface, 3042980916);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateMachineInterface>()
	{
		return USMStateMachineInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateMachineInterface(Z_Construct_UClass_USMStateMachineInterface, &USMStateMachineInterface::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateMachineInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateMachineInterface);
	void USMStateMachineNetworkedInterface::StaticRegisterNativesUSMStateMachineNetworkedInterface()
	{
	}
	UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister()
	{
		return USMStateMachineNetworkedInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMStateMachineNetworkedInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::ClassParams = {
		&USMStateMachineNetworkedInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateMachineNetworkedInterface, 2372079641);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateMachineNetworkedInterface>()
	{
		return USMStateMachineNetworkedInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateMachineNetworkedInterface(Z_Construct_UClass_USMStateMachineNetworkedInterface, &USMStateMachineNetworkedInterface::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateMachineNetworkedInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateMachineNetworkedInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
