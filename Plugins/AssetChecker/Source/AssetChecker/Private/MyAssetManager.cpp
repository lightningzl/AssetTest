// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"
#include "ToolLibrary.h"

DEFINE_LOG_CATEGORY(LogAssetTest);

UMyAssetManager* UMyAssetManager::Get()
{
	UMyAssetManager* This = Cast<UMyAssetManager>(GEngine->AssetManager);
	if (nullptr == This)
	{
		UE_LOG(LogAssetTest, Fatal, TEXT("Invalid AssetManager In DefaultEngine"));
		return NewObject<UMyAssetManager>();
	}
	else
	{
		return This;
	}
}

void UMyAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
#if WITH_EDITOR
	FCoreUObjectDelegates::OnAssetLoaded.AddUObject(this, &UMyAssetManager::OnAssetLoaded);
#endif
}

void UMyAssetManager::OnAssetLoaded(UObject* Asset)
{
	UE_LOG(LogAssetTest, Display, TEXT("%s Loaded"), *Asset->GetFullName());
	NewLoadedAssets.Add(Asset->GetFullName());
}

void UMyAssetManager::OnAsyncAssetLoaded(FSoftObjectPath Path)
{

}

void UMyAssetManager::OnPackageLoaded(const FName& PackageName, UPackage* LoadedPackage)
{

}

FString UMyAssetManager::MyAsyncLoadObject(FSoftObjectPath Path, FOnPackageLoaded OnPackageLoaded)
{
	FString result;
	result += FString::Printf(TEXT("StartLoad:\t%s\n"), *Path.ToString());
	return result;
}

FString UMyAssetManager::PrintAssetReferences(FString Path)
{
	return "";
}

FString UMyAssetManager::MyLoadObject(FString Path)
{
	FString Result;
	NewLoadedAssets.Empty();
	UObject* Obj = LoadObject<UObject>(nullptr, *Path);
	if (Obj != nullptr)
	{
		Result += FString::Printf(TEXT("Loaded:\t%s\n"), *Obj->GetFullName());
		
		NewLoadedAssets.Remove(Obj->GetFullName());
		for (const FString& Str : NewLoadedAssets)
		{
			Result += FString::Printf(TEXT("NewLoaded:\t%s\n"), *Str);
		}
		FString TempStr = UToolLibrary::PrintObject(Obj, EToolPrintFlags::PackageDefault);
		UE_LOG(LogAssetTest, Warning, TEXT("\n%s\n"), *TempStr);
	}
	else
	{
		Result += FString::Printf(TEXT("NotFound:\t%s\n"), *Path);
	}
	return Result;
}

FString UMyAssetManager::MyLoadPackage(FString Path)
{
	return "";
}

FString UMyAssetManager::MyFindObject(FString Path)
{
	return "";
}

void UMyAssetManager::LoadObjectTest()
{
	ConstructorHelpers::FObjectFinder<USkeletalMesh> ObjFinder(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	ConstructorHelpers::FClassFinder<UAnimInstance> AnimClassFinder(TEXT("/Game/Mannequin/Animations/ThirdPerson_AnimBP"));
	LoadObject<USkeletalMesh>(nullptr, TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin_Female.SK_Mannequin_Female'"));
	LoadClass<UAnimInstance>(nullptr, TEXT("/Game/Mannequin/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP_C"));
}

