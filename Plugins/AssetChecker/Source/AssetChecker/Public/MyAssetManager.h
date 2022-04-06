// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Containers/UnrealString.h"
#include "MyAssetManager.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_DELEGATE(FOnPackageLoaded);

UCLASS()
class ASSETCHECKER_API UMyAssetManager : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = MyAssetManager)
		static UMyAssetManager* GetInstancePtr();
	static UMyAssetManager& GetInstance();

	UFUNCTION(BlueprintCallable, Category = MyAssetManager)
		FString MyAsyncLoadObject(FSoftObjectPath Path, FOnPackageLoaded OnPackageLoaded);

private:
	static UMyAssetManager* s_MyAssetManager;
};
