#pragma once

#include "NativeGameplayTags.h"
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
	void GetSessionType(ESessionType& SessionType);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetSessionType(ESessionType SessionType);
};