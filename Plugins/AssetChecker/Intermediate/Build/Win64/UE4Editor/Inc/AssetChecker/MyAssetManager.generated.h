// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftObjectPath;
class UMyAssetManager;
#ifdef ASSETCHECKER_MyAssetManager_generated_h
#error "MyAssetManager.generated.h already included, missing '#pragma once' in MyAssetManager.h"
#endif
#define ASSETCHECKER_MyAssetManager_generated_h

#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_13_DELEGATE \
static inline void FOnPackageLoaded_DelegateWrapper(const FScriptDelegate& OnPackageLoaded) \
{ \
	OnPackageLoaded.ProcessDelegate<UObject>(NULL); \
}


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_SPARSE_DATA
#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyAsyncLoadObject); \
	DECLARE_FUNCTION(execGetInstancePtr);


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyAsyncLoadObject); \
	DECLARE_FUNCTION(execGetInstancePtr);


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAssetManager(); \
	friend struct Z_Construct_UClass_UMyAssetManager_Statics; \
public: \
	DECLARE_CLASS(UMyAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetChecker"), NO_API) \
	DECLARE_SERIALIZER(UMyAssetManager)


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMyAssetManager(); \
	friend struct Z_Construct_UClass_UMyAssetManager_Statics; \
public: \
	DECLARE_CLASS(UMyAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetChecker"), NO_API) \
	DECLARE_SERIALIZER(UMyAssetManager)


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAssetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAssetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAssetManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAssetManager(UMyAssetManager&&); \
	NO_API UMyAssetManager(const UMyAssetManager&); \
public:


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAssetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAssetManager(UMyAssetManager&&); \
	NO_API UMyAssetManager(const UMyAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAssetManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAssetManager)


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_PRIVATE_PROPERTY_OFFSET
#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_15_PROLOG
#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_SPARSE_DATA \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_RPC_WRAPPERS \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_INCLASS \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_SPARSE_DATA \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_INCLASS_NO_PURE_DECLS \
	AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETCHECKER_API UClass* StaticClass<class UMyAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AssetTest_Plugins_AssetChecker_Source_AssetChecker_Public_MyAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
