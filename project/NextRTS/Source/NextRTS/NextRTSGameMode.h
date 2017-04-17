// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NextRTSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class NEXTRTS_API ANextRTSGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	ANextRTSGameMode();
	UPROPERTY(VisibleDefaultsOnly, Category = RTS)
	int  MaxPlayer;
	
	
};
