// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "CCGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class CURINGCORRUPTION_API UCCGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UCCGameUserSettings* GetCC_GameUserGameSettings();

	UFUNCTION(BlueprintCallable)
	void SetMainVolume(float NewMainVolume);

	UFUNCTION(BlueprintCallable)
	void SetMusicVolume(float NewMusicVolume);

	UFUNCTION(BlueprintCallable)
	void SetAmbienceVolume(float NewAmbienceVolume);

	UFUNCTION(BlueprintCallable)
	void SetFootstepsVolume(float NewFootstepsVolume);

	UFUNCTION(BlueprintCallable)
	void SetSFX_Volume(float NewSFX_Volume);

	UFUNCTION(BlueprintPure)
	float GetMainVolume() const;

	UFUNCTION(BlueprintPure)
	float GetMusicVolume() const;

	UFUNCTION(BlueprintPure)
	float GetAmbienceVolume() const;

	UFUNCTION(BlueprintPure)
	float GetFootstepsVolume() const;

	UFUNCTION(BlueprintPure)
	float GetSFX_Volume() const;

protected:
	UPROPERTY(Config)
	float MainVolume;
	UPROPERTY(Config)
	float MusicVolume;

	UPROPERTY(Config)
	float AmbienceVolume;

	UPROPERTY(Config)
	float FootstepsVolume;

	UPROPERTY(Config)
	float SFX_Volume;
};
