#pragma once

#include "Blueprint/UserWidget.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "UINavigationInterface.generated.h"

UINTERFACE(Blueprintable)
class UUINavigationInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IUINavigationInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void OnActivatedNavigation();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void InitializeButtons();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void FindButtonFromWidgetClass(TSubclassOf<class UCommonActivatableWidget> WidgetClass, bool& Found, UCommonButtonBase*& Button);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void DoButtonsHaveFocus(bool& ButtonsHaveFocus);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SelectDefaultButton();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SelectPreviousButton();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetPreviousButton(UCommonButtonBase*& Button, int& Index);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SelectNextButton();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetNextButton(UCommonButtonBase*& Button, int& Index);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetSelectedButton(UCommonButtonBase*& Button, int& Index);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetStartingLocation(const TArray<TSubclassOf<class UCommonActivatableWidget>>& WidgetClass, bool Select);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetStartingLocation(TArray<TSubclassOf<class UCommonActivatableWidget>>& WidgetClass);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SelectStartingLocation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void ResetStartingLocation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetChildStartingLocation(bool& HasChildren, TArray<TSubclassOf<class UCommonActivatableWidget>>& StartingLocation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void DisplayMask();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void RemoveMask();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void RotateMask(float Rotation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetBackgroundImage(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void RemoveBackgroundImage();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetForegroundImage(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void RemoveForegroundImage();
};