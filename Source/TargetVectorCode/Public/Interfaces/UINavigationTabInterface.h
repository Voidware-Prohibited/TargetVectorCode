#pragma once

#include "Blueprint/UserWidget.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "UINavigationTabInterface.generated.h"

UINTERFACE(Blueprintable)
class UUINavigationTabInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IUINavigationTabInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Navigation")
	void GetNavigationInfo(UCommonActivatableWidgetStack*& Stack, TSubclassOf<class UCommonActivatableWidget>& WidgetClass);

};