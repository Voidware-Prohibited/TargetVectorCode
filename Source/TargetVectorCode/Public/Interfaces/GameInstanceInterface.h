#pragma once

#include "NativeGameplayTags.h"
#include "AudioMixerBlueprintLibrary.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "GameInstanceInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameInstanceInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IGameInstanceInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetInstanceState(FGameplayTag& InstanceState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetInstanceState(FGameplayTag InstanceState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetDebugMode(bool& DebugMode);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void SetIsNewInstance(bool& IsNewInstance);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|State")
	void GetIsNewInstance(bool& IsNewInstance);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void FadeInMainMenuMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuFadeOut();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void FadeOutMainMenuMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuIntroMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void FadeOutMainMenuIntroMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Loading Screem")
	void StartLoadingScreenMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Loading Screem")
	void FadeOutLoadingScreenMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void SetBPM(float BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void GetBPM(float& BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void SetKey(EMusicalNoteName BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void GetKey(EMusicalNoteName& BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void SetTransposition(int Transposition);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void GetTransposition(int& Transposition);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void SetTimeSignature(FQuartzTimeSignature TimeSignature);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void GetTimeSignature(FQuartzTimeSignature& TimeSignature);
};