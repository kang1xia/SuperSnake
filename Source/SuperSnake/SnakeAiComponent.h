// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SnakeAiComponent.generated.h"

// Ai的一些状态
namespace EAiState
{
	enum Type
	{
		E_Free,
		E_RunAway,
	};
}


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SUPERSNAKE_API USnakeAiComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USnakeAiComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 改变状态
	void ChangeState(EAiState::Type State);

	// 更新Ai
	void UpdateAi();

	// 随机找方向移动
	void RandomDir();

	// 检查是否要超过地图
	void CheckNearByBound();

	// 检查敌人
	void CheckEnemy(float DeltaSeconds);

private:
	TEnumAsByte<EAiState::Type> CurrentState;
		
	class ASnakePawn* SnakeOwner;

	// 检查时间
	float ScanEnemyTime;
	// 检查时间间隔
	float ScanTimeInterval;
};
