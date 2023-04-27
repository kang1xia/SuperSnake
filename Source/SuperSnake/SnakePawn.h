// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UObject/ObjectMacros.h"
#include "SnakeInfoInterface.h"
#include "SnakePawn.generated.h"

UCLASS()
class SUPERSNAKE_API ASnakePawn : public APawn, public ISnakeInfoInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASnakePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 移动
	void UpdateMove(float DeltaTime);

	// 转头
	void TurnRight(float Value);

	// 摇杆输入
	void OnTouchJoyX(float Value);
	void OnTouchJoyY(float Value);
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 增加身体
	void AddSnakeBody();

	// 吃食物
	void EatFood();

	// 开始重叠事件
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 更新虚拟遥感方向
	void UpdateFaceByJoy();

	// 接口重写函数，用于获得自身
	virtual ASnakePawn* GetSnakePawn_Implementation() override;

private:
	UPROPERTY(VisibleAnywhere)
	class UPaperFlipbookComponent* HeadComp; // 头组件
	UPROPERTY()
	class ABodyActor* NextNode; // 下一个蛇身
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereCollision;
	UPROPERTY(EditAnywhere)
	class USnakeAiComponent* AiComponent; // Ai的蛇身上才会出现此Actor组件


	float Speed; // 移动速度
	int32 MaxEatFood;
	int32 FoodCount;
	float AxisX;
	float AxisY;

	// 友元类
	friend class USnakeAiComponent;

};
