// Copyright Epic Games, Inc. All Rights Reserved.

#include "PathFollowerGameMode.h"
#include "PathFollowerCharacter.h"
#include "UObject/ConstructorHelpers.h"

APathFollowerGameMode::APathFollowerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
