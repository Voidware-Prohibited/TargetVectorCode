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

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Quit Game")
	void DisplayQuitGamePrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Quit Game")
	void RemoveQuitGamePrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Quit Game")
	void IsQuitGamePromptActive(bool& IsActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Quit Game")
	void DisplayAbandonChangesPrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Quit Game")
	void RemoveAbandonChangesPrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Quit Game")
	void IsAbandonChangesPromptActive(bool& IsActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Quit Game")
	void ConfirmAbandonChangesPrompt();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void IsInMainMenuLevel(bool& IsInMainMenuLevel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayMainMenuMask();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenuMask();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RotateMainMenuMask(float Rotation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
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

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Readiness")
	void DisplayReadiness();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Readiness")
	void RemoveReadiness();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void SetCurrentMenuStack(const UCommonActivatableWidgetStack* Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetCurrentMenuStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayServerTabLobby();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveServerTabLobby();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayServerTabInGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveServerTabInGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void InitializeServerTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveServerTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetFocusedWidget(UUserWidget*& FocusedWidget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SetFocusedWidget(const UUserWidget* FocusedWidget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
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

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectPlayDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectPlayPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectPlayNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectOperationsDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectOperationsPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectOperationsNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Profile")
	void SelectProfileDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Profile")
	void SelectProfilePreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Profile")
	void SelectProfileNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectServerDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectServerPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectServerNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectGameMasterDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectGameMasterPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectGameMasterNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectUGCDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectUGCPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectUGCNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectShopDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectShopPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectShopNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectLockerDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectLockerPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SelectLockerNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Settings")
	void SelectSettingsDefaultTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Settings")
	void SelectSettingsPreviousTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu|Settings")
	void SelectSettingsNextTab();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToDashboard();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToMessages();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToNotifications();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcut|Main Menus")
	void GoToScore();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToMap();
};