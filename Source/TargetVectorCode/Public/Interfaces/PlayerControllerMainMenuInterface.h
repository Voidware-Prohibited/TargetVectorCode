#pragma once

#include "GameFramework/Actor.h"
#include "PlayerControllerMainMenuInterface.generated.h"

UINTERFACE(Blueprintable)
class UPlayerControllerMainMenuInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IPlayerControllerMainMenuInterface {
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
  void SetView(AActor* Actor, float BlendTime, bool EnableAutoCameraRotation);

};