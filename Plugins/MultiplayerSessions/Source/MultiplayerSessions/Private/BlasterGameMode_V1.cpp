// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterGameMode_V1.h"

ABlasterGameMode_V1::ABlasterGameMode_V1()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Game/Blueprints/Character/BP_Player_Blaster"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
