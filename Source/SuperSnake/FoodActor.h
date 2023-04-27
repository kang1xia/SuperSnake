// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoodActor.generated.h"

UCLASS()
class SUPERSNAKE_API AFoodActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFoodActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ��ʳ�ﳯ����ͷ�����ƶ�
	void UpdateMoveToHead(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// �������һ��ʳ��
	void RandomFoods();

	// ��ȡ��ͷ
	void GetSnakePawn(class ASnakePawn* HeadPawn);


private:
	UPROPERTY()
	class UPaperSpriteComponent* FoodComp;
	UPROPERTY()
	class ASnakePawn* Head;
};
