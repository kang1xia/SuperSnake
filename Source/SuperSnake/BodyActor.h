// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakeInfoInterface.h"
#include "SnakePawn.h"
#include "BodyActor.generated.h"

UCLASS()
class SUPERSNAKE_API ABodyActor : public AActor, public ISnakeInfoInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABodyActor();

	// ��������
	void AddSnakeBody(ABodyActor* Body);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// �ƶ�
	void UpdateMoveByTrack();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// ��¼�Ų�
	void AddTrackPointer(FVector Pointer);

	// �ӿں�����д
	virtual class ASnakePawn* GetSnakePawn_Implementation() override;

	// ���SnakePawn
	void SetSnakePawn(class ASnakePawn*);

private:
	UPROPERTY()
	class UPaperSpriteComponent* BodyComp;
	UPROPERTY()
	ABodyActor* NextNode;
	UPROPERTY()
	class ASnakePawn* SnakePawn;

	TArray<FVector> TrackArray; // �Ų�����
};
