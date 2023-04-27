// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeAiComponent.h"
#include "SnakePawn.h"
#include "Engine/EngineTypes.h"
#include "CollisionShape.h"
#include "Components/ActorComponent.h"
#include "SnakeInfoInterface.h"

// Sets default values for this component's properties
USnakeAiComponent::USnakeAiComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// 初始化
	ScanTimeInterval = 0.5f;
	ScanEnemyTime = 0;
}


// Called when the game starts
void USnakeAiComponent::BeginPlay()
{
	Super::BeginPlay();

	// 获得Ai的宿主
	SnakeOwner = Cast<ASnakePawn>(GetOwner());

	ChangeState(EAiState::E_Free);
}


// Called every frame
void USnakeAiComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	CheckNearByBound();
	CheckEnemy(DeltaTime);
}

void USnakeAiComponent::ChangeState(EAiState::Type State)
{
	switch (State)
	{
	case EAiState::E_Free:
		if (SnakeOwner)
		{
			// 间隔几秒钟换一次方向
			float Time = FMath::RandRange(2.0f, 3.0f);
			FTimerHandle Handle; // 事件句柄
			// 定时器
			SnakeOwner->GetWorld()->GetTimerManager().SetTimer(Handle, this, &USnakeAiComponent::RandomDir, Time);
		}
		break;
	case EAiState::E_RunAway:
		break;
	default:
		break;
	}

	CurrentState = State;
}

void USnakeAiComponent::UpdateAi()
{
	switch (CurrentState)
	{
	case EAiState::E_Free:
		break;
	case EAiState::E_RunAway:
		break;
	default:
		break;
	}
}

void USnakeAiComponent::RandomDir()
{
	if (!SnakeOwner)
	{
		return;
	}
	SnakeOwner->AxisX = FMath::RandRange(-1, 1);
	SnakeOwner->AxisY = FMath::RandRange(-1, 1);
	// UE_LOG(LogTemp, Log, TEXT("zzzz"));
	ChangeState(EAiState::E_Free);
}

void USnakeAiComponent::CheckNearByBound()
{
	if (!SnakeOwner)
	{
		return;
	}

	float X = SnakeOwner->GetActorLocation().X;
	float Y = SnakeOwner->GetActorLocation().Z;

	bool bNear = false;
	float MinX = -1;
	float MaxX = 1;
	float MaxY = 1;
	float MinY = -1;

	if (X >= 1650)
	{
		if (SnakeOwner->AxisX >= 0) // 如果现在还在往右走，则迫使往左
		{
			bNear = true;
			MaxX = 0; // 只往左走
		}
	}
	else if( X <= -1650)
	{
		if (SnakeOwner->AxisX <= 0)
		{
			MinX = 0; // 只往右走
			bNear = true;
		}
	}

	if (Y >= 1800)
	{
		if (SnakeOwner->AxisY >= 0)
		{
			MaxY = 0; // 只往下走
			bNear = true;
		}
	}
	else if (Y <= -1800)
	{
		if (SnakeOwner->AxisY <= 0)
		{
			MinY = 0; // 只往上走
			bNear = true;
		}
	} 

	if (bNear == true)
	{
		SnakeOwner->AxisX = FMath::RandRange(MinX, MaxX);
		SnakeOwner->AxisY = FMath::RandRange(MinY, MaxY);
	}
	
}

void USnakeAiComponent::CheckEnemy(float DeltaSeconds)
{
	if (!SnakeOwner)
	{
		return;
	}
	if ((ScanEnemyTime += DeltaSeconds) < ScanTimeInterval)
	{
		return; // 定时器，检查时间是否超过了检查间隔
	}
	ScanEnemyTime = 0;

	TArray<FHitResult> Hits;

	FCollisionShape Shape;
	Shape.ShapeType = ECollisionShape::Sphere;
	Shape.Sphere.Radius = 300;

	// 进行扫描
	if (GetWorld()->SweepMultiByChannel(Hits, SnakeOwner->GetActorLocation(), SnakeOwner->GetActorLocation(), FQuat(0, 0, 0, 0), ECC_Camera, Shape))
	{
		for (auto Hit : Hits)
		{
			if (!Hit.GetActor()) // 撞击到的对象指针
			{
				continue;
			}

			// 判断当前的对象是不是继承自我们的接口
			ISnakeInfoInterface* Interface = Cast<ISnakeInfoInterface>(Hit.GetActor());
			if (Interface)
			{
				ASnakePawn* HitPawn = Interface->Execute_GetSnakePawn(Hit.GetActor()); // 调用撞击到的对象中重写的接口的函数，并返回一个这个对象自身的指针
				if (!HitPawn)
				{
					continue;
				}
				if (HitPawn != SnakeOwner) // 如果不是撞到我自己，掉头就跑
				{
					FVector Dir = SnakeOwner->GetActorLocation() - HitPawn->GetActorLocation(); // 我的向量-撞到的Pawn的向量，为他指向我这一方向的向量，所以直接掉头就跑
					Dir.Normalize();

					SnakeOwner->AxisX = Dir.X;
					SnakeOwner->AxisY = Dir.Z;
					break;
				}
			}
		}
	}
}

