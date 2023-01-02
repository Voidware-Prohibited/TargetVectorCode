#pragma once

#include "NativeGameplayTags.h"
#include "Styling/SlateColor.h"
#include "Style/StyleSettings.h"
#include "Utility/TVStructs.h"
#include "Settings/SessionSettings.h"
#include "GameInstanceInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameInstanceInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IGameInstanceInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetIsLoggedIn(bool& IsLoggedIn);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetInstanceState(EInstanceState& InstanceState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetInstanceState(EInstanceState InstanceState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetDebugMode(bool& DebugMode);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetIsNewInstance(bool IsNewInstance);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetIsNewInstance(bool& IsNewInstance);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetCachedUISettings();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetCachedUISettings(float& UIScale, FSlateColor& UIPrimaryColor, FSlateColor& UISecondaryColor, ESize& TextSize, ESize& SubtitleTextSize);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetCachedUIFormatSettings();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetCachedUIFormatSettings(ETimeFormat& TimeFormat, EDateFormat& DateFormat, EMeasurementFormat& MeasurementFormat);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetCachedUIColorSettings();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetCachedUIColorSettings(EColorBlindFilter& ColorBlindFilter, float& FilterStrength, FSlateColor& PrimaryColor, FSlateColor& ConfirmColor, FSlateColor& BackColor, FSlateColor& ModifyColor, FSlateColor& DeleteColor, FSlateColor& ConfirmAltColor, FSlateColor& EnemyColor, FSlateColor& NeutralColor, FSlateColor& SelfColor, FSlateColor& FireteamColor, FSlateColor& SectionColor, FSlateColor& OrganizationColor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetSessionType(ESessionType& SessionType);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetSessionType(ESessionType SessionType);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetNumberOfUnreadMessages(int& NumberOfUnreadMessages);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetMessages(TArray<FMessageThread>& Messages);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetNumberOfUnreadRequests(int& NumberOfUnreadRequests);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetRequests(TArray<FRequest>& Requests);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetNumberOfUnreadNotifications(int& NumberOfUnreadNotifications);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetNotifications(TArray<FNotification>& Notifications);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetPlayerLevel(int& PlayerLevel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetPlayerRank(int& PlayerRank);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetLevels(TArray<FLevelInfo>& Levels);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetPlayerProfilePicture(FPlayerProfilePictureImage& PlayerProfilePicture);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetPlayerBackgrounds(TArray<FUnitProfilePictureImageLayer>& PlayerStaticBackgrounds);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetPlayerPoses(TArray<FUnitProfilePicturePoseLayer>& PlayerPoses);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetPlayerFrames(TArray<FUnitProfilePictureImageLayer>& PlayerFrames);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetUnitProfilePicture(FUnitProfilePictureImage& UnitProfilePicture);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetUnitBackgrounds(TArray<FUnitProfilePictureImageLayer>& UnitStaticBackgrounds);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetUnitForegrounds(TArray<FUnitProfilePictureImageLayer>& UnitStaticForegrounds);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetUnitFrames(TArray<FUnitProfilePictureImageLayer>& UnitFrames);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetColors(TArray<FSlateColor>& Colors);
};