#pragma once

#include "PlayerControllerInterface.generated.h"

UINTERFACE(Blueprintable)
class UPlayerControllerInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IPlayerControllerInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Lobby")
	void OnAllPlayersLoadedInLobbyLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Lobby")
	void GetTogglePlayerReadyTimeElapsed(float& TimeElaped);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnBeforeTravelToGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnAllPlayersLoadedInGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Camera")
	void CameraComponentEnableCountdownRotation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Camera")
	void CameraComponentStopRotation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Debug")
	void DisplayDebugUI(bool& Display);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnLobbyPreCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnBeforeLobbyCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnLobbyCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnBeforeLobbyPostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnLobbyPostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnLobbyCountdownComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnGamePreCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnBeforeGameCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnGameCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnBeforeGamePostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnGamePostCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnGameCountdownComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnBeforeGameStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnGameStart();

};