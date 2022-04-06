// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetChecker/Public/MyAssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAssetManager() {}
// Cross Module References
	ASSETCHECKER_API UFunction* Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AssetChecker();
	ASSETCHECKER_API UClass* Z_Construct_UClass_UMyAssetManager_NoRegister();
	ASSETCHECKER_API UClass* Z_Construct_UClass_UMyAssetManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MyAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AssetChecker, nullptr, "OnPackageLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMyAssetManager::execMyAsyncLoadObject)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_Path);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPackageLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->MyAsyncLoadObject(Z_Param_Path,FOnPackageLoaded(Z_Param_OnPackageLoaded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAssetManager::execGetInstancePtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyAssetManager**)Z_Param__Result=UMyAssetManager::GetInstancePtr();
		P_NATIVE_END;
	}
	void UMyAssetManager::StaticRegisterNativesUMyAssetManager()
	{
		UClass* Class = UMyAssetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstancePtr", &UMyAssetManager::execGetInstancePtr },
			{ "MyAsyncLoadObject", &UMyAssetManager::execMyAsyncLoadObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics
	{
		struct MyAssetManager_eventGetInstancePtr_Parms
		{
			UMyAssetManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetManager_eventGetInstancePtr_Parms, ReturnValue), Z_Construct_UClass_UMyAssetManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyAssetManager" },
		{ "ModuleRelativePath", "Public/MyAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAssetManager, nullptr, "GetInstancePtr", nullptr, nullptr, sizeof(MyAssetManager_eventGetInstancePtr_Parms), Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAssetManager_GetInstancePtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAssetManager_GetInstancePtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics
	{
		struct MyAssetManager_eventMyAsyncLoadObject_Parms
		{
			FSoftObjectPath Path;
			FScriptDelegate OnPackageLoaded;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPackageLoaded;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetManager_eventMyAsyncLoadObject_Parms, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::NewProp_OnPackageLoaded = { "OnPackageLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetManager_eventMyAsyncLoadObject_Parms, OnPackageLoaded), Z_Construct_UDelegateFunction_AssetChecker_OnPackageLoaded__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetManager_eventMyAsyncLoadObject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::NewProp_OnPackageLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyAssetManager" },
		{ "ModuleRelativePath", "Public/MyAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAssetManager, nullptr, "MyAsyncLoadObject", nullptr, nullptr, sizeof(MyAssetManager_eventMyAsyncLoadObject_Parms), Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyAssetManager_NoRegister()
	{
		return UMyAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UMyAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetChecker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyAssetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAssetManager_GetInstancePtr, "GetInstancePtr" }, // 3869059608
		{ &Z_Construct_UFunction_UMyAssetManager_MyAsyncLoadObject, "MyAsyncLoadObject" }, // 2886302602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyAssetManager.h" },
		{ "ModuleRelativePath", "Public/MyAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyAssetManager_Statics::ClassParams = {
		&UMyAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyAssetManager, 1540209325);
	template<> ASSETCHECKER_API UClass* StaticClass<UMyAssetManager>()
	{
		return UMyAssetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAssetManager(Z_Construct_UClass_UMyAssetManager, &UMyAssetManager::StaticClass, TEXT("/Script/AssetChecker"), TEXT("UMyAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
