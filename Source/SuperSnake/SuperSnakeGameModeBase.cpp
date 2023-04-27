// Copyright Epic Games, Inc. All Rights Reserved.


#include "SuperSnakeGameModeBase.h"
#include "UObject/Object.h"
#include "SnakePawn.h"
#include "FoodActor.h"
#include "SnakeController.h"

ASuperSnakeGameModeBase::ASuperSnakeGameModeBase()
{
	// 设置默认的Pawn
	DefaultPawnClass = ASnakePawn::StaticClass();
	// 设置默认的玩家控制器
	PlayerControllerClass = ASnakeController::StaticClass();
}

void ASuperSnakeGameModeBase::Init()
{
	FoodNum = FMath::RandRange(70, 100);
	for (int32 i = 0; i < FoodNum; i++)
	{
		SpawnFood();
	}
}

void ASuperSnakeGameModeBase::SpawnFood()
{
	GetFood();
}

void ASuperSnakeGameModeBase::SubFood()
{
	// 食物减少
	FoodNum--;
	if (FoodNum < 50) // 当食物减少至30个，就生成30~40个食物
	{
		int32 Num = FMath::RandRange(20, 50);
		for (int32 i = 0; i < Num; i++)
		{
			SpawnFood();
		}
		FoodNum += Num; // 重新生成食物然后赋值给食物总量
	}
}

void ASuperSnakeGameModeBase::ReturnFood(class AFoodActor* Food)
{
	if (!Food)
	{
		return;
	}
	Food->SetActorLocation(FVector(0, -500, 0)); // 吃到食物之后，给食物藏起来，让玩家看不到就行
	FoodArray.Add(Food); // 给吃掉的食物放到一个容器中，之后要是食物变少就拿这个容器中的食物，减少系统性能损耗
}

class AFoodActor* ASuperSnakeGameModeBase::GetFood(float X, float Z)
{
	if (X == 0 && Z == 0)
	{
		X = FMath::RandRange(-1800, 1800);
		Z = FMath::RandRange(-1800, 1800);
	}

	if (FoodArray.Num() > 0)
	{
		AFoodActor* Food = FoodArray.Last();
		FoodArray.RemoveAt(FoodArray.Num() - 1);
		Food->SetActorLocation(FVector(X, 0, Z));
		Food->RandomFoods();
		return Food;
	}
	return GetWorld()->SpawnActor<AFoodActor>(AFoodActor::StaticClass(), FVector(X, 0, Z), FRotator::ZeroRotator);
}

void ASuperSnakeGameModeBase::BeginPlay()
{
	// 初始化
	Init();
}
