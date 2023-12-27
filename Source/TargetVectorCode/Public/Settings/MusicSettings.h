// MIT

#pragma once

#include "Utility/TVStructs.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "MusicSettings.generated.h"

UCLASS(Blueprintable, BlueprintType)
class TARGETVECTORCODE_API UMusicSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Music|Music Sets")
	TArray<FMusicSet> MusicSets;
 
	UMusicSettings();
	
};