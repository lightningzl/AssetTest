// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"

UMyAssetManager* UMyAssetManager::s_MyAssetManager = nullptr;

UMyAssetManager* UMyAssetManager::GetInstancePtr()
{
	if (nullptr == s_MyAssetManager)
	{
		GetInstance();
	}
	return s_MyAssetManager;
}

UMyAssetManager& UMyAssetManager::GetInstance()
{
	if (nullptr == s_MyAssetManager)
	{
		s_MyAssetManager = NewObject<UMyAssetManager>();
		s_MyAssetManager->AddToRoot();
	}
	return *s_MyAssetManager;
}

FString UMyAssetManager::MyAsyncLoadObject(FSoftObjectPath Path, FOnPackageLoaded OnPackageLoaded)
{
	FString result;
	result += FString::Printf(TEXT("StartLoad:\t%s\n"), *Path.ToString());
	return result;
}
