// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterLobbyGameMode.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
void ABlasterLobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	int32 PlayerCount = GameState.Get()->PlayerArray.Num();

	if(PlayerCount == 3)
	{
		UWorld* World = GetWorld();
		if(World)
		{
			bUseSeamlessTravel = true;
			World->ServerTravel("/Game/Maps/Blaster_NeonCity?listen");
		}

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				1,
				600.f,
				FColor::Yellow,
				FString::Printf(TEXT("Players in game: %d"), PlayerCount)
			);

			APlayerState* PlayerState = NewPlayer->GetPlayerState<APlayerState>();
			if (PlayerState)
			{
				FString PlayerName = PlayerState->GetPlayerName();
				GEngine->AddOnScreenDebugMessage(
					2,
					60.f,
					FColor::Cyan,
					FString::Printf(TEXT("%s has joined the game!"), *PlayerName)
				);
			}
		}
	}
}
