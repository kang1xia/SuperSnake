// Copyright Epic Games, Inc. All Rights Reserved.


#include "SuperSnakeGameModeBase.h"
#include "UObject/Object.h"
#include "SnakePawn.h"
#include "FoodActor.h"
#include "SnakeController.h"

ASuperSnakeGameModeBase::ASuperSnakeGameModeBase()
{
	// ����Ĭ�ϵ�Pawn
	DefaultPawnClass = ASnakePawn::StaticClass();
	// ����Ĭ�ϵ���ҿ�����
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
	// ʳ�����
	FoodNum--;
	if (FoodNum < 50) // ��ʳ�������30����������30~40��ʳ��
	{
		int32 Num = FMath::RandRange(20, 50);
		for (int32 i = 0; i < Num; i++)
		{
			SpawnFood();
		}
		FoodNum += Num; // ��������ʳ��Ȼ��ֵ��ʳ������
	}
}

void ASuperSnakeGameModeBase::ReturnFood(class AFoodActor* Food)
{
	if (!Food)
	{
		return;
	}
	Food->SetActorLocation(FVector(0, -500, 0)); // �Ե�ʳ��֮�󣬸�ʳ�������������ҿ���������
	FoodArray.Add(Food); // ���Ե���ʳ��ŵ�һ�������У�֮��Ҫ��ʳ����پ�����������е�ʳ�����ϵͳ�������
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
	// ��ʼ��
	Init();
}
