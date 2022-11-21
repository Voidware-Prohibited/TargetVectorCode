#pragma once

#include "Internationalization/Text.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "HUDInterface.generated.h"

UINTERFACE(Blueprintable)
class UHUDInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IHUDInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu|Quit Game")
	void DisplayQuitGamePrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu|Quit Game")
	void RemoveQuitGamePrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu|Quit Game")
	void IsQuitGamePromptActive(bool& IsActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu|Quit Game")
	void DisplayAbandonChangesPrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu|Quit Game")
	void RemoveAbandonChangesPrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu|Quit Game")
	void IsAbandonChangesPromptActive(bool& IsActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu|Quit Game")
	void ConfirmAbandonChangesPrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void DisplayMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void RemoveMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void IsMainMenuActive(bool& IsActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void DisplayInGameMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void RemoveInGameMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void IsInGameMainMenuActive(bool& IsActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Debug")
	void GetOverlayMenu(UOverlayModeMenu*& OverlayMenu);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Black Screen")
	void DisplayBlackScreen(float InitialDelay, float FadeLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Black Screen")
	void RemoveBlackScreen(float InitialDelay, float FadeLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Countdown")
	void DisplayCountdown(float PreCountDelayLength, float CountdownLength, float PostCountDelayLength, const FText &StandyLabel, const FText &InProgressLabel, const FText &CompletedLabel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Countdown")
	void StartCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Countdown")
	void RemoveCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Pre Game Game Master Menu")
	void DisplayPreGameGameMasterMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Pre Game Game Master Menu")
	void RemovePreGameGameMasterMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Player Ready Overlay")
	void DisplayPlayerReadyOverlay();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Player Ready Overlay")
	void RemovePlayerReadyOverlay();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|In Game Game Master Menu")
	void DisplayInGameGameMasterMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|In Game Game Master Menu")
	void RemoveInGameGameMasterMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetGameLayerStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetGameMenuStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetMenuStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetOverlayStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetSubtitleStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetModalQueue(UCommonActivatableWidgetQueue*& Queue);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void DisplayGameLayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void RemoveGameLayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void GetServerTabStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void DisplayReadiness();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void RemoveReadiness();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void DisplayServerTabLobby();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void RemoveServerTabLobby();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void DisplayServerTabInGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void RemoveServerTabInGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void InitializeServerTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void RemoveServerTab();

};