// Copyright Epic Games, Inc. All Rights Reserved.

#include "AssetTestGameMode.h"
#include "AssetTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAssetTestGameMode::AAssetTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
