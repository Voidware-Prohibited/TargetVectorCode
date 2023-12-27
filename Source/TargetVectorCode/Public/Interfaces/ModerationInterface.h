#pragma once

#include "NativeGameplayTags.h"
#include "Utility/TVModerationStructs.h"
#include "ModerationInterface.generated.h"

UINTERFACE(Blueprintable)
class UModerationInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IModerationInterface {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game State|Moderation")
	void AddPlayerProfanityRecord(FPlayerProfanityRecord NewPlayerProfanityRecord);

};