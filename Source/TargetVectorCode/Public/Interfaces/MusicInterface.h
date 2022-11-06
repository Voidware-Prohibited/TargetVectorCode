#pragma once

#include "AudioMixerBlueprintLibrary.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundSubmix.h"
#include "MusicInterface.generated.h"

UINTERFACE(Blueprintable)
class UMusicInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IMusicInterface {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void GetMusicSubmix(USoundSubmix*& MusicSubmix);
	
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

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void PlayImmediately(USoundBase* Sound);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void PlayNextBar(USoundBase* Sound);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void PlayNextQuantized(USoundBase* Sound);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartLobbyMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartGameStartMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartAirdropMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StopAirdropMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartAreaMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartStealthMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartActionMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartSpawnMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartDeathMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartGameEndMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartVictoryMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartDefeatMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void FadeOutMusic();

};