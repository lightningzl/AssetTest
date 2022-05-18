// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyClass.generated.h"

/**
 * 
 */
UCLASS()
class ASSETTEST_API UMyClass : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection);
	UFUNCTION(BlueprintCallable, Category = "MyClass", meta = (WorldContext = "WorldContextObject"))
		void ShowWidget(const UObject* WorldContextObject);
};
