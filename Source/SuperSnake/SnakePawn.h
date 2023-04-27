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

	// �ƶ�
	void UpdateMove(float DeltaTime);

	// תͷ
	void TurnRight(float Value);

	// ҡ������
	void OnTouchJoyX(float Value);
	void OnTouchJoyY(float Value);
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ��������
	void AddSnakeBody();

	// ��ʳ��
	void EatFood();

	// ��ʼ�ص��¼�
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// ��������ң�з���
	void UpdateFaceByJoy();

	// �ӿ���д���������ڻ������
	virtual ASnakePawn* GetSnakePawn_Implementation() override;

private:
	UPROPERTY(VisibleAnywhere)
	class UPaperFlipbookComponent* HeadComp; // ͷ���
	UPROPERTY()
	class ABodyActor* NextNode; // ��һ������
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereCollision;
	UPROPERTY(EditAnywhere)
	class USnakeAiComponent* AiComponent; // Ai�������ϲŻ���ִ�Actor���


	float Speed; // �ƶ��ٶ�
	int32 MaxEatFood;
	int32 FoodCount;
	float AxisX;
	float AxisY;

	// ��Ԫ��
	friend class USnakeAiComponent;

};
