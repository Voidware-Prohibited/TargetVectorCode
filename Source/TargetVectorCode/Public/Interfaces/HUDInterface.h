#pragma once

#include "Internationalization/Text.h"
#include "CommonActivatableWidget.h" 
#include "CommonButtonBase.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "CommonAnimatedSwitcher.h"
#include "GameFramework/Actor.h"
#include "Utility/TVStructs.h"
#include "NativeGameplayTags.h"
#include "HUDInterface.generated.h"

UINTERFACE(Blueprintable)
class UHUDInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IHUDInterface {
	GENERATED_BODY()

public:

	// UNIVERSAL

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void Back();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void AddBreadcrumbEntry(FBreadcrumbEntry BreadcrumbEntry);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void RemoveBreadcrumbEntry(FBreadcrumbEntry BreadcrumbEntry);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetBreadcrumb(TArray<FBreadcrumbEntry>& Breadcrumb);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Appearance")
	void SetupAppearance();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void InitializeButtons();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetupNavigation();

	// MAIN MENU

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void IsInMainMenuLevel(bool& IsInMainMenuLevel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void IsMainMenuActive(bool& IsActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void EnableMainMenuNavigation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisableMainMenuNavigation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void IsMainMenuNavigationEnabled(bool& IsEnabled);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayMainMenuNavigation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void HideMainMenuNavigation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void IsMainMenuNavigationVisible(bool& IsEnabled);

	// PROMPTS

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

	// SCANLINES LAYER

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayMainMenuScanlines();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenuScanlines();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayMainMenuBlur(float Strength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenuBlur();

	// MASK LAYER

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void DisplayMainMenuMask(bool Solid);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenuMask();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RotateMainMenuMask(float Rotation);

	// BACKGROUND LAYERS

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SetMainMenuBackgroundImage(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenuBackgroundImage();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void SetMainMenuBackgroundForegroundImage(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveMainMenuBackgroundForegroundImage();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Main Menu")
	void RemoveAllMainMenuBackgroundLayers();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Debug")
	void GetOverlayMenu(UOverlayModeMenu*& OverlayMenu);

	// BLACK SCREEN

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Black Screen")
	void DisplayBlackScreen(float InitialDelay, float FadeLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Black Screen")
	void RemoveBlackScreen(float InitialDelay, float FadeLength);

	// OPENING CREDITS 

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Opening Credits")
	void DisplayOpeningCredit(float DisplayLength, const FText& Title, const FText& Name);

	// DATE TIME LOCATION 

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Time Date Location Title")
	void DisplayTimeDateLocationTitle(float DisplayLength);

	// COUNTDOWN

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Countdown")
	void DisplayCountdown(float PreCountDelayLength, float CountdownLength, float PostCountDelayLength, const FText &StandyLabel, const FText &InProgressLabel, const FText &CompletedLabel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Countdown")
	void StartCountdown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Countdown")
	void RemoveCountdown();

	// CONTEXTUAL INPUT PROMPT

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Contextual Input Prompt")
	void AddContextualInputPrompts(const TArray<FContextualInputAction>& ContextualInputPrompts);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Contextual Input Prompt")
	void RemoveContextualInputPrompts(const TArray<FContextualInputAction>& ContextualInputPrompts);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Contextual Input Prompt")
	void RemoveAllContextualInputPrompts();

	// REVIEW FOR REMOVAL

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

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
	void GetServerTabStack(UCommonActivatableWidgetStack*& Stack);

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

	// LAYERS

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
	void GetOpeningCreditsStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetEndCreditsStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetNowPlayingStack(UCommonActivatableWidgetStack*& Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Layers")
	void GetCutsceneNowPlayingStack(UCommonActivatableWidgetStack*& Stack);

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

	// READINESS

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Readiness")
	void DisplayReadiness();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Readiness")
	void RemoveReadiness();

	// MUSIC

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Now Playing")
	void DisplayNowPlaying(FMusicInfo MusicInfo, float DisplayLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Now Playing")
	void RemoveNowPlaying();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Now Playing")
	void DisplayCutsceneNowPlaying(FMusicInfo MusicInfo, float DisplayLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Now Playing")
	void RemoveCutsceneNowPlaying();

	// APP INTRO ANIMATIONS

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Apps")
	void AddPlayedAppIntroAnimation(FGameplayTag App);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Apps")
	void ResetAppIntroAnimations();

	// SPECTATING

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Spectating")
	void StartDeathSequence();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Spectating")
	void DisplayKillCamMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Spectating")
	void RemoveKillCamMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Spectating")
	void DisplaySpectatorMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Spectating")
	void RemoveSpectatorMenu();

	// DEBRIEFING

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Debriefing")
	void StartDebriefingSequence();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Debriefing")
	void DisplayDebriefingMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD|Debriefing")
	void RemoveDebriefingMenu();

	// NAVIGATION

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetCurrentMenuStack(const UCommonActivatableWidgetStack* Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetCurrentMenuStack(UCommonActivatableWidgetStack*& Stack);

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

	// SHORTCUTS

	// Profile

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToDashboard();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToMessages();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToRequests();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToNotifications();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcut|Main Menus")
	void GoToProfile();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcut|Main Menus")
	void GoToCharacter();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcut|Main Menus")
	void GoToCharacterCustomization();

	// Server

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcut|Main Menus")
	void GoToScoreboard();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcut|Main Menus")
	void GoToRoster();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcut|Main Menus")
	void GoToOperations();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToMap();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToMissons();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToIntel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToServices();

	// Shop

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToShop();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToShopClothing();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToShopWeapons();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToShopEquipment();

	// Locker

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToLocker();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToLockerClothing();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToLockerWeapons();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Shortcuts|Main Menu")
	void GoToLockerEquipment();

	// Render Target

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Render Target")
	void SetInteractiveRenderTarget(const AActor* Actor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation|Render Target")
	void GetInteractiveRenderTarget(AActor*& Actor);

};