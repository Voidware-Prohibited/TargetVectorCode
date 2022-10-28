#pragma once

#include "GameStateInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameStateInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IGameStateInterface {
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
  bool IsTrue();

};