// Fill out your copyright notice in the Description page of Project Settings.


#include "CCGameUserSettings.h"

UCCGameUserSettings::UCCGameUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	MainVolume = 1.0f;
	MusicVolume = 1.0f;
	AmbienceVolume = 1.0f;
	FootstepsVolume = 1.0f;
	SFX_Volume = 1.0f;
}

UCCGameUserSettings* UCCGameUserSettings::GetCC_GameUserGameSettings()
{
	return Cast<UCCGameUserSettings> (UCCGameUserSettings::GetGameUserSettings());
}

void UCCGameUserSettings::SetMainVolume(float NewMainVolume)
{
	MainVolume = NewMainVolume;
}

void UCCGameUserSettings::SetMusicVolume(float NewMusicVolume)
{
	MusicVolume = NewMusicVolume;
}

void UCCGameUserSettings::SetAmbienceVolume(float NewAmbienceVolume)
{
	AmbienceVolume = NewAmbienceVolume;
}

void UCCGameUserSettings::SetFootstepsVolume(float NewFootstepsVolume)
{
	FootstepsVolume = NewFootstepsVolume;
}

void UCCGameUserSettings::SetSFX_Volume(float NewSFX_Volume)
{
	SFX_Volume = NewSFX_Volume;
}

float UCCGameUserSettings::GetMainVolume() const
{
	return MainVolume;
}

float UCCGameUserSettings::GetMusicVolume() const
{
	return MusicVolume;
}

float UCCGameUserSettings::GetAmbienceVolume() const
{
	return AmbienceVolume;
}

float UCCGameUserSettings::GetFootstepsVolume() const
{
	return FootstepsVolume;
}

float UCCGameUserSettings::GetSFX_Volume() const
{
	return SFX_Volume;
}
