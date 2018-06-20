// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Game_01GameMode.h"
#include "Game_01HUD.h"
#include "Game_01Character.h"
#include "UObject/ConstructorHelpers.h"

AGame_01GameMode::AGame_01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGame_01HUD::StaticClass();
}
