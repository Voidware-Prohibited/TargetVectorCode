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
	void OnAllPlayersLoadedInLobby();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Lobby")
	void GetTogglePlayerReadyTimeElapsed(float& TimeElaped);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Pre-Game")
	void OnBeforeTravelToGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Pre-Game")
	void OnAllPlayersLoadedInGameLevel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Pre-Game")
	void OnPreGameCountdownInitialDelayStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Pre-Game")
	void OnPreGameCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Pre-Game")
	void CameraComponentEnableCountdownRotation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Pre-Game")
	void CameraComponentStopRotation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Pre-Game")
	void OnPreGameCountdownComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnBeforeGameStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Game Start")
	void OnGameStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Controller|Debug")
	void DisplayDebugUI(bool& Display);

};