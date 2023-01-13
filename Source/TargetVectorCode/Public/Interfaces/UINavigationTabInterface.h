#pragma once

#include "Blueprint/UserWidget.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "CommonActivatableWidget.h"
#include "CommonButtonBase.h"
#include "UINavigationTabInterface.generated.h"

UINTERFACE(Blueprintable)
class UUINavigationTabInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IUINavigationTabInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetStack(UCommonActivatableWidgetStack* Stack);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetOtherButtons(const TArray<UCommonButtonBase*>& OtherButtons);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void SetWidget(TSubclassOf<class UCommonActivatableWidget> WidgetClass);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetNavigationInfo(UCommonActivatableWidgetStack*& Stack, TSubclassOf<class UCommonActivatableWidget>& WidgetClass);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void OnSelected();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void UnselectOtherButtons();
};