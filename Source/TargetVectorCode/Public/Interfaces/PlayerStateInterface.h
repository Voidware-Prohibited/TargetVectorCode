#pragma once

#include "NativeGameplayTags.h"
#include "Utility/ALSXTGameplayTags.h"
#include "PlayerStateInterface.generated.h"

UINTERFACE(Blueprintable)
class UPlayerStateInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IPlayerStateInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void StartPreGameCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void OnUpdateReadyPlayers();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void SetPlayerServerState(FGameplayTag NewPlayerServerState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void GetPlayerServerState(FGameplayTag& PlayerServerState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void SetPlayerServerRole(FGameplayTag NewPlayerServerRole);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void GetPlayerServerRole(FGameplayTag& PlayerServerRole);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void GetVitals(float& Health, float& Stamina, float& Armor, float& Thirst, float& Hunger);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void OnPreGameCountdownInitialDelayStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void OnPreGameCountdownStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void OnPreGameCountdownComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void AddReadyPlayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void RemoveReadyPlayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player State")
	void OnBeforeTravelToGameLevel();

};