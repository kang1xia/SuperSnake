// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SnakeSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class SUPERSNAKE_API USnakeSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	float Num;
	UPROPERTY()
	FString Name;
};
