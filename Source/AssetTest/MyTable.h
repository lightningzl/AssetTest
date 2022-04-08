// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MyTable.generated.h"

/**
 * 
 */
USTRUCT()
struct ASSETTEST_API FMyTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyTable)
		int32 TestInt;
	
};
