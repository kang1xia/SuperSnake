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

	// 让食物朝着蛇头方向移动
	void UpdateMoveToHead(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 随机生成一个食物
	void RandomFoods();

	// 获取蛇头
	void GetSnakePawn(class ASnakePawn* HeadPawn);


private:
	UPROPERTY()
	class UPaperSpriteComponent* FoodComp;
	UPROPERTY()
	class ASnakePawn* Head;
};
