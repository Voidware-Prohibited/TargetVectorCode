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
	void SetStartingWidget(TSubclassOf<class UCommonActivatableWidget> WidgetClass);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetSelectedButton(UCommonButtonBase*& Button, int& Index);
};