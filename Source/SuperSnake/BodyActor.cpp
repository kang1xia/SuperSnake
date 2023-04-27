// Fill out your copyright notice in the Description page of Project Settings.


#include "BodyActor.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ABodyActor::ABodyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BodyComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BodyComp"));
	SetRootComponent(BodyComp);
}

void ABodyActor::AddSnakeBody(ABodyActor* Body)
{
	if (NextNode)
	{
		NextNode->AddSnakeBody(Body);
	}
	else
	{
		NextNode = Body;
		// 设置一下此蛇身的位置
		//NextNode->SetActorLocation(GetActorLocation() + GetActorUpVector() * -50);
		NextNode->SetActorLocation(GetActorLocation());
	}

	
}

// Called when the game starts or when spawned
void ABodyActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 加载资源
	UPaperSprite* BodySource = LoadObject<UPaperSprite>(GetWorld(), TEXT("PaperSprite'/Game/SuperSnake/Textures/Snakes/Body01/Body01_Sprite.Body01_Sprite'"));
	if (BodySource)
	{
		BodyComp->SetSprite(BodySource); // 设置Sprite为加载的资源
	}
}

void ABodyActor::UpdateMoveByTrack()
{
	if (TrackArray.Num() < 10) // 如果我当前存的脚步小于10
	{
		return;
	}
	SetActorLocation(TrackArray[0]); // 从存的第一个脚步开始走起，走完就把这个位置删除
	if (NextNode)
	{
		NextNode->AddTrackPointer(GetActorLocation()); // 若有下一个蛇身，则把自己的位置给下一个蛇身
	}
	// 移除这第一个脚步
	TrackArray.RemoveAt(0);
}

// Called every frame
void ABodyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateMoveByTrack();
}

void ABodyActor::AddTrackPointer(FVector Pointer)
{
	TrackArray.Add(Pointer); // 添加脚步位置
}

void ABodyActor::SetSnakePawn(class ASnakePawn* SnakePa)
{
	this->SnakePawn = SnakePa;
}

class ASnakePawn* ABodyActor::GetSnakePawn_Implementation()
{
	return SnakePawn;
}

