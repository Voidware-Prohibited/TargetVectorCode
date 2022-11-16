#pragma once

#include "AudioMixerBlueprintLibrary.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundSubmix.h"
#include "Quartz/AudioMixerClockHandle.h" 
#include "Sound/QuartzQuantizationUtilities.h"
#include "MusicInterface.generated.h"

UINTERFACE(Blueprintable)
class UMusicInterface : public UInterface {
	GENERATED_BODY()
};

class TARGETVECTORCODE_API IMusicInterface {
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music")
	void GetQuartzClock(UQuartzClockHandle*& QuartzClock);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music")
	void StartClock();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music")
	void RestartClock();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music")
	void StopClock();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void SetBPM(float BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void GetBPM(float& BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void SetKey(EMusicalNoteName BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void GetKey(EMusicalNoteName& BPM);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void SetTransposition(int Transposition);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void GetTransposition(int& Transposition);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void SetTimeSignature(FQuartzTimeSignature TimeSignature);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Settings")
	void GetTimeSignature(FQuartzTimeSignature& TimeSignature);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Playback")
	void PlayImmediately(USoundBase* Sound, bool Loop);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Playback")
	void PlayNextBar(USoundBase* Sound, bool Loop);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Playback")
	void PlayNextHalfBar(USoundBase* Sound, bool Loop);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Playback")
	void PlayNextQuarterBar(USoundBase* Sound, bool Loop);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Playback")
	void PlayNextQuantized(USoundBase* Sound, bool Loop);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuSlideMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuSlideLoopMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuSlideOutMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuLoopMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuOutMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StartMainMenuCreditsMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Main Menu")
	void StoptMainMenuCreditsMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Loading Screen")
	void StartLoadingScreenMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Loading Screen")
	void FadeOutLoadingScreenMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Lobby")
	void StartLobbyMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Lobby")
	void StopLobbyMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartGameStartMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartAirdropMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StopAirdropMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartAreaMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StopAreaMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartStealthMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StopStealthMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartActionMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StopActionMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartSpawnMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartDeathMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartGameEndMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartVictoryMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void StartDefeatMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void FadeOutMusic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Instance|Music|Game")
	void FadeOutInWorldMusic();

};