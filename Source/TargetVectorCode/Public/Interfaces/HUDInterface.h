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
	void IsInMainMenuLevel(bool& IsInMainMenuLevel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void DisplayMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void RemoveMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Main Menu")
	void IsMainMenuActive(bool& IsActive);

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
	void InitializePrimaryLayout();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void DisplayGameLayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void RemoveGameLayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void DisplayGameMenuLayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void RemoveGameMenuLayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void GetServerTabStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void DisplayReadiness();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void RemoveReadiness();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void SetCurrentMenuStack(const UCommonActivatableWidgetStack* Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetCurrentMenuStack(UCommonActivatableWidgetStack*& Stack);

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

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void GetFocusedWidget(UUserWidget*& FocusedWidget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
	void SetFocusedWidget(const UUserWidget* FocusedWidget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetStartingLocation(const TArray<TSubclassOf<class UCommonActivatableWidget>>& WidgetClass);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SetMainMenuProfile(const UCommonActivatableWidget* Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void GetMainMenuProfile(UCommonActivatableWidget*& Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SetMainMenuSettings(const UCommonActivatableWidget* Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void GetMainMenuSettings(UCommonActivatableWidget*& Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SetMainMenuSettingsGameplay(const UCommonActivatableWidget* Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void GetMainMenuSettingsGameplay(UCommonActivatableWidget*& Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SetMainMenuSettingsVideo(const UCommonActivatableWidget* Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void GetMainMenuSettingsVideo(UCommonActivatableWidget*& Widget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectMainMenuDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectMainMenuPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectMainMenuNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Profile")
	void SelectProfileDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Profile")
	void SelectProfilePreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Profile")
	void SelectProfileNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Settings")
	void SelectSettingsDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Settings")
	void SelectSettingsPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Settings")
	void SelectSettingsNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts")
	void GoToDashboard();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts")
	void GoToMessages();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts")
	void GoToNotifications();
};