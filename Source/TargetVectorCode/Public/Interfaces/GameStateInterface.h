#pragma once

#include "Settings/Settings.h"
#include "GameStateInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameStateInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IGameStateInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void GetAllPlayerStates(TArray<APlayerState*>& PlayerStates);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Settings")
	void GetPreGameSettings(bool& EnableLobby, bool& EnableLobbyCountdown, float& LobbyCountdownLength, bool& EnablePreGameCountdown, float& PreGameCountdownInitialDelayLength, float& PreGameCoundownLength, bool& HostMustStartGame, bool& PlayerReadyRequired, int& MinPlayers, int& MaxPlayers);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Settings")
	void GetPreGameCameraSettings(bool& SpectatePlayers, bool& SpectateAI, float& LobbyCountdownLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Settings")
	void GetSpectatingSettings(bool& EnableSpectating, FName& SpectatingTag, bool& EnableKillCamTransition, bool& SpectatePlayers, bool& SpectateAI, TArray<ESpectatorViewMode>& AllowedViewModes);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnAllPlayersLoadedInLobby();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsPlayerReadyAllowed(bool& Allowed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void AddReadyPlayer(APlayerState* PlayerState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void GetReadyPlayers(TArray<APlayerState*>& ReadyPlayers);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void RemoveReadyPlayer(APlayerState* PlayerState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void AreAllPlayersReady(bool& Ready);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsPlayerReady(APlayerState* PlayerState, bool& Ready);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsPlayerUneadyAllowed(bool& Allowed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void ResetReadyPlayers();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void CanGameStart(bool& CanGameStart);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnStartGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void CanTravelToGameLevel(bool& CanTravel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void TravelFromLobbyToGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void OnAllPlayersLoadedInGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void GetLevelNames(FString& Entry, FString& Lobby, FString& GameLevel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void StartCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnStartCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void GetCountdown(float& Countdown);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsCountingDown(bool& IsCountingDown);

};