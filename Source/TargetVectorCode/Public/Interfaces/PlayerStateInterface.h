#pragma once

#include "PlayerStateInterface.generated.h"

UINTERFACE(Blueprintable)
class UPlayerStateInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IPlayerStateInterface {
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
  bool IsTrue();

};