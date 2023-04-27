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

	// ��ʼ��
	void Init();
	// ����ʳ��
	void SpawnFood();
	// ʳ�����
	void SubFood();
	// ����ʳ��
	void ReturnFood(class AFoodActor* Food);
	// ���ʳ��
	class AFoodActor* GetFood(float X = 0, float Z = 0);


	virtual void BeginPlay() override;


private:
	int32 FoodNum;

	UPROPERTY()
	TArray<class AFoodActor*> FoodArray;
};
