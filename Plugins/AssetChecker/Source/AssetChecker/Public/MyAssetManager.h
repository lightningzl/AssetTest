// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Containers/UnrealString.h"
#include "Engine/AssetManager.h"

#include "MyAssetManager.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAssetTest, Log, All);


DECLARE_DYNAMIC_DELEGATE(FOnPackageLoaded);

/**
 * 
 */
UCLASS()
class ASSETCHECKER_API UMyAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, CallInEditor, DisplayName = "MyAssetManager", Category = MyAssetManager)
		static UMyAssetManager* Get();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = MyAssetManager)
		FString MyAsyncLoadObject(FSoftObjectPath Path, FOnPackageLoaded OnPackageLoaded);
	UFUNCTION(BlueprintCallable, CallInEditor, Category = MyAssetManager)
		FString PrintAssetReferences(FString Path);
	UFUNCTION(BlueprintCallable, CallInEditor, Category = MyAssetManager)
		FString MyLoadObject(FString Path);
	UFUNCTION(BlueprintCallable, CallInEditor, Category = MyAssetManager)
		FString MyLoadPackage(FString Path);
	UFUNCTION(BlueprintCallable, CallInEditor, Category = MyAssetManager)
		FString MyFindObject(FString Path);

	UFUNCTION(BlueprintCallable, Category = MyAssetManager)
		void LoadObjectTest();

private:
	virtual void StartInitialLoading() override;
	void OnAssetLoaded(UObject* Asset);
	void OnAsyncAssetLoaded(FSoftObjectPath Path);
	void OnPackageLoaded(const FName& PackageName, UPackage* LoadedPackage);

	FString	CurrentLoadPackage;
	TArray<FString> NewLoadedAssets;
};
