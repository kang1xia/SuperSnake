// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodActor.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "SnakePawn.h"
#include "GameFramework/PlayerController.h"
#include "SnakeSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "SuperSnakeGameModeBase.h"
#include "GameFramework/Actor.h"

// Sets default values
AFoodActor::AFoodActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FoodComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("FoodComp"));
	SetRootComponent(FoodComp);
}

// Called when the game starts or when spawned
void AFoodActor::BeginPlay()
{
	Super::BeginPlay();
	
	// �������һ��ʳ��
	RandomFoods();

}

void AFoodActor::UpdateMoveToHead(float Value)
{
	if (!Head)
	{
		return;
	}
	FVector Dir = Head->GetActorLocation() - GetActorLocation(); // ���һ��Food������ͷ������
	if (Dir.Size() < 30)
	{
		Head->EatFood();
		// �õ�GameModeBase
		ASuperSnakeGameModeBase* Gm = Cast<ASuperSnakeGameModeBase>(GetWorld()->GetAuthGameMode());
		if (Gm)
		{
			Gm->ReturnFood(this); // ���Ե���ʳ��ŵ�FoodArray�����У�����ʳ����������
			Gm->SubFood(); // ����ʳ�ʳ����ٵ�һ�����������������ʳ���������ʳ��Ϊ0�������������Щʳ��
		}
		Head = nullptr;
		//Destroy();
		return;
	}
	Dir.Normalize(); // ��񻯣���õ�λ����
	AddActorWorldOffset(Dir * Value * 400);
}

// Called every frame
void AFoodActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateMoveToHead(DeltaTime);


	// ������
#if 0
	APlayerController* Pc = GetWorld()->GetFirstPlayerController();
	if (!Pc)
	{
		return;
	}
	if (Pc->WasInputKeyJustPressed(EKeys::F))
	{
		// �����洢������
		USnakeSaveGame* SaveGame = Cast<USnakeSaveGame>(UGameplayStatics::CreateSaveGameObject(USnakeSaveGame::StaticClass()));
		if (SaveGame)
		{
			SaveGame->Num = 110;
			SaveGame->Name = TEXT("OK");
			UE_LOG(LogTemp, Log, TEXT("Finsh Storage!"));

			// ���д洢
			UGameplayStatics::SaveGameToSlot(SaveGame, TEXT("Snake"), 0);
			return;
		}
	}
	if (Pc->WasInputKeyJustPressed(EKeys::G))
	{
		USnakeSaveGame* LoadGame = Cast<USnakeSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("Snake"), 0));
		if (LoadGame)
		{
			UE_LOG(LogTemp, Log, TEXT("%f"), LoadGame->Num);
			UE_LOG(LogTemp, Log, TEXT("%s"), *(LoadGame->Name));
			return;
		}
	}

#endif

}

void AFoodActor::RandomFoods()
{
	int32 index = FMath::RandRange(0, 3);
	switch (index)
	{
	case 0:
		FoodComp->SetSprite(LoadObject<UPaperSprite>(nullptr, TEXT("PaperSprite'/Game/SuperSnake/Textures/Foods/snake_skin_1473422546624_Sprite2.snake_skin_1473422546624_Sprite2'")));
		break;
	case 1:
		FoodComp->SetSprite(LoadObject<UPaperSprite>(nullptr, TEXT("PaperSprite'/Game/SuperSnake/Textures/Foods/snake_skin_1476358543734_Sprite1.snake_skin_1476358543734_Sprite1'")));
		break;
	case 2:
		FoodComp->SetSprite(LoadObject<UPaperSprite>(nullptr, TEXT("PaperSprite'/Game/SuperSnake/Textures/Foods/snake_skin_1476358601752_Sprite0.snake_skin_1476358601752_Sprite0'")));
		break;
	case 3:
		FoodComp->SetSprite(LoadObject<UPaperSprite>(nullptr, TEXT("PaperSprite'/Game/SuperSnake/Textures/Foods/snake_skin_1481080541127_Sprite3.snake_skin_1481080541127_Sprite3'")));
		break;
	default:
		break;
	}
}

void AFoodActor::GetSnakePawn(ASnakePawn* HeadPawn)
{
	this->Head = HeadPawn;
}



