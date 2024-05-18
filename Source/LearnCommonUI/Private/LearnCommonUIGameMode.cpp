// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnCommonUIGameMode.h"
#include "LearnCommonUICharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearnCommonUIGameMode::ALearnCommonUIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
