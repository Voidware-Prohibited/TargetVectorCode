#pragma once

#include "GameModeInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameModeInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IGameModeInterface {
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
  bool IsTrue();

};