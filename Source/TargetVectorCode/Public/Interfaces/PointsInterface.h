#pragma once

#include "PointsInterface.generated.h"

UINTERFACE(Blueprintable)
class UPointsInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IPointsInterface {
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MyCategory")
  bool IsTrue();

};