// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamePrjGameMode.h"
#include "GamePrjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamePrjGameMode::AGamePrjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
