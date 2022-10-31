#pragma once

#include "GameModeInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameModeInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IGameModeInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void OnAllPlayersLoadedInLobbyLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void TravelFromLobbyLevelToGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void OnCountdownComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void OnAllPlayersLoadedInGameLevel();

};