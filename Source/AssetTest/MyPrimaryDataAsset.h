// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyPrimaryDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class ASSETTEST_API UMyPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UTexture2D* HardReferenceObject;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<AActor> HardReferenceClass;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (MetaClass = "Texture2D"))
		FSoftObjectPath SoftReferenceObject;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (MetaClass = "Actor"))
		FSoftClassPath SoftReferenceClass;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	FPrimaryAssetType AssetType;.
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	FPrimaryAssetId AssetId;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftObjectPtr<UObject> SoftAsset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<UObject> SoftAssetClass;
};
