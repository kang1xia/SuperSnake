// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SuperSnakeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SUPERSNAKE_API ASuperSnakeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	



public:
	ASuperSnakeGameModeBase();

	// 初始化
	void Init();
	// 生成食物
	void SpawnFood();
	// 食物减少
	void SubFood();
	// 返回食物
	void ReturnFood(class AFoodActor* Food);
	// 获得食物
	class AFoodActor* GetFood(float X = 0, float Z = 0);


	virtual void BeginPlay() override;


private:
	int32 FoodNum;

	UPROPERTY()
	TArray<class AFoodActor*> FoodArray;
};
