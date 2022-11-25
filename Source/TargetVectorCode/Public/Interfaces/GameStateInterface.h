#pragma once

#include "NativeGameplayTags.h"
#include "Settings/Settings.h"
#include "Utility/TVStructs.h"
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
	void GetPreGameSettings(bool& EnableLobby, FGameplayTag& LobbyMode, bool& EnableLobbyCountdown, float& LobbyCountdownPreDelay, float& LobbyCountdownLength, float& LobbyCountdownPostDelay, FGameplayTag& PreGameMode, bool& EnablePreGameCountdown, float& PreGameCountdownPreDelay, float& PreGameCoundownLength, float& PreGameCountdownPostDelay, bool& HostMustStartGame, bool& PlayerReadyRequired, int& MinPlayers, int& MaxPlayers);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Settings")
	void GetPreGameCameraSettings(bool& SpectatePlayers, bool& SpectateAI, bool& AutoRotateCameras, float& AutoRotateCameraDelay);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Settings")
	void GetDeathSettings(bool& EnableIncapacitation, bool& EnableUnconciousness, bool& EnableRevive, float& ReviveCountdownLength, bool& EnableRespawn, float& RespawnPointCost, float& RespawnCashCost, float& RespawnXPCost, bool& EnableRespawnContest, bool& EnableTickets, int& RespawnTicketCost);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Settings")
	void GetSpectatingSettings(bool& EnableSpectating, float& SpectatingDelay, FName& SpectatingTag, bool& EnableKillCamTransition, bool& SpectatePlayers, bool& SpectateAI, TArray<FGameplayTag>& AllowedViewModes);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Tickets")
	void GetTicketSettings(bool& EnableTicketsForSecurity, int& StartingTicketAmount, int& RespawnTicketCost, bool& UseCustomTicketDistribution, TArray<FTicketDistributionEntry>& CustomTicketDistribution);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Tickets")
	void SetTicketSettings(bool EnableTicketsForSecurity, int StartingTicketAmount, int RespawnTicketCost, bool UseCustomTicketDistribution, const TArray<FTicketDistributionEntry>& CustomTicketDistribution);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Tickets")
	void SetTicketDistributionForUnit(const FString& ID, const FGameplayTag& PlayerUnitType, FTicketDistributionEntry TicketDistribution);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Tickets")
	void GetTickets(TArray<FTicketsEntry>& Tickets);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Tickets")
	void GetTicketsForUnit(FString& ID, FGameplayTag& PlayerUnitType, int& Tickets);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Tickets")
	void SetTicketsForUnit(const FString& ID, const FGameplayTag& PlayerUnitType, int Tickets);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Settings")
	void GetRespawnContestSettings(int& Tickets, TArray<FContestRound>& ContestRounds, bool& Random, float& RespawnContestDelay, float& PreRoundDelay, float& PreRoundCountdownLength, float& RespawnDelay, float& RespawnCountdownLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnAllPlayersLoadedInLobbyLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsPlayerReadyAllowed(bool& Allowed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void AddReadyPlayer(APlayerState* PlayerState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void GetReadyPlayers(TArray<APlayerState*>& ReadyPlayers);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void RemoveReadyPlayer(APlayerState* PlayerState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void OnUpdateReadyPlayers();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void OnAllPlayersReady();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void SetLockLobby(bool Lock);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsLobbyLocked(bool& Locked);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void AreAllPlayersReady(bool& Ready);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsPlayerReady(APlayerState* PlayerState, bool& Ready);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void IsPlayerUnreadyAllowed(bool& Allowed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Readiness")
	void ResetReadyPlayers();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnLobbyPreCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnBeforeLobbyCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnLobbyCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnBeforeLobbyPostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnLobbyPostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnLobbyCountdownComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnGamePreCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnBeforeGameCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnGameCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnBeforeGamePostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnGamePostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State")
	void OnGameCountdownComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void CanTravelToGameLevel(bool& CanTravel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnBeforeTravelToGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnBeforeTravelToLobbyLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void TravelFromLobbyToGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void TravelFromGameLevelToLobbyLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void OnAllPlayersLoadedInGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Travel")
	void GetLevelNames(FString& Entry, FString& Lobby, FString& GameLevel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnStartPreCountdown();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void StartCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void GetCountdown(float& Countdown);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void IsCountingDown(bool& IsCountingDown);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnEndCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void CanGameStart(bool& CanGameStart);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnBeforeGameStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void OnGameStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void EndGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Start Game")
	void EndSession();
};