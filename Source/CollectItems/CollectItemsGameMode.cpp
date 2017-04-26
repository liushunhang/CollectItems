// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CollectItems.h"
#include "CollectItemsGameMode.h"
#include "CollectItemsCharacter.h"

ACollectItemsGameMode::ACollectItemsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/BP_CollectItemsCharacter.BP_CollectItemsCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
