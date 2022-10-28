#pragma once

#include "PlayerControllerInterface.generated.h"

UINTERFACE(Blueprintable)
class UPlayerControllerInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IPlayerControllerInterface {
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
  bool IsTrue();

};