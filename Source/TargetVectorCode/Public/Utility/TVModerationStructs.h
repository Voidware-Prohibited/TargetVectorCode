#pragma once

#include "NativeGameplayTags.h"
#include "Engine/DataTable.h"
#include "TVGameplayTags.h"
#include "Misc/DateTime.h"
#include "TVModerationStructs.generated.h"

USTRUCT(BlueprintType)
struct TARGETVECTORCODE_API FProfaneWord
	: public FTableRowBase
{
		GENERATED_BODY()

	public:
		/** The language (for localization) */
		UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		FName Language;

		/** Where 0 is the most severe */
		UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		int Severity;

		/** The word itself */
		UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		FString Word;
};

USTRUCT(BlueprintType)
struct TARGETVECTORCODE_API FPlayerProfanityRecord
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FString TextCharacterLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	int Severity;
};