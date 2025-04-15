// Copyright Epic Games, Inc. All Rights Reserved.

#include "TempleGameMode.h"
#include "TempleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATempleGameMode::ATempleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
