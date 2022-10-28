#pragma once

#include "GameInstanceInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameInstanceInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IGameInstanceInterface {
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
  bool IsTrue();

};