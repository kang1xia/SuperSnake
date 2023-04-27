// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SnakeAiComponent.generated.h"

// Ai��һЩ״̬
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

	// �ı�״̬
	void ChangeState(EAiState::Type State);

	// ����Ai
	void UpdateAi();

	// ����ҷ����ƶ�
	void RandomDir();

	// ����Ƿ�Ҫ������ͼ
	void CheckNearByBound();

	// ������
	void CheckEnemy(float DeltaSeconds);

private:
	TEnumAsByte<EAiState::Type> CurrentState;
		
	class ASnakePawn* SnakeOwner;

	// ���ʱ��
	float ScanEnemyTime;
	// ���ʱ����
	float ScanTimeInterval;
};
