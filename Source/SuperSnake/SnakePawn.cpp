// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakePawn.h"
#include "Components/SceneComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "BodyActor.h"
#include "Components/SphereComponent.h"
#include "FoodActor.h"
#include "GameFramework/PlayerController.h"
#include "SnakeAiComponent.h"

// Sets default values
ASnakePawn::ASnakePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));

	HeadComp = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("HeadComp"));
	HeadComp->SetupAttachment(RootComponent);
	HeadComp->SetRelativeLocation(FVector(0, 5, 0)); // ��ͷ��΢����ͻ��һ��

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SphereCollision->SetupAttachment(HeadComp); //ֻ��ͷ�ܳ�ʳ��
	SphereCollision->SetCollisionProfileName(TEXT("OverlapAll")); // ��ײģʽ
	SphereCollision->SetSphereRadius(110); // �ص��İ뾶
	SphereCollision->SetHiddenInGame(false); // ����һ��


	USpringArmComponent* CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetRelativeRotation(FRotator(0, -90, 0)); // ������ת
	CameraBoom->bDoCollisionTest = false; // ���õ��ɱ۵���ײΪfalse

	UCameraComponent* MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	MainCamera->SetupAttachment(CameraBoom);
	MainCamera->SetProjectionMode(ECameraProjectionMode::Orthographic); // ���������������ģʽΪ����
	MainCamera->SetOrthoWidth(1700); // ������������ĵ��Ŀ��


	// ��ʼ��
	Speed = 400;
	FoodCount = 0;
	MaxEatFood = 5; // ��������ͳ�һ������
}

// Called when the game starts or when spawned
void ASnakePawn::BeginPlay()
{
	Super::BeginPlay();
	
	// �󶨿�ʼ�ص��¼�
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ASnakePawn::OnComponentBeginOverlap);

	// ������Դ
	// �ǲ�����ҲٿصĽ�ɫ
	if (Cast<APlayerController>(GetController()))
	{
		UPaperFlipbook* HeadAnim = LoadObject<UPaperFlipbook>(GetWorld(), TEXT("PaperFlipbook'/Game/SuperSnake/Animation/S01/PFB_Head.PFB_Head'"));
		if (HeadAnim)
		{
			HeadComp->SetFlipbook(HeadAnim);
		}
	}
	else
	{
		UPaperFlipbook* HeadAnim = LoadObject<UPaperFlipbook>(GetWorld(), TEXT("PaperFlipbook'/Game/SuperSnake/Animation/S02/PFB_SnakeHead.PFB_SnakeHead'"));
		if (HeadAnim)
		{
			HeadComp->SetFlipbook(HeadAnim);
		}
		// ��̬���Ai���
		AiComponent = NewObject<USnakeAiComponent>(this, TEXT("AiComponent"));
		AiComponent->RegisterComponent(); // ע����� 
		
	}
	

}

// ʱ���ƶ�
void ASnakePawn::UpdateMove(float DeltaTime)
{
	AddActorWorldOffset(DeltaTime * Speed * HeadComp->GetUpVector()); // ��ͷ�ķ�������
	if (NextNode)
	{
		NextNode->AddTrackPointer(GetActorLocation()); // ���Լ���λ�ø���һ������
	}
}

// ת����
void ASnakePawn::TurnRight(float Value)
{
	// pitch������ת
	HeadComp->AddWorldRotation(FRotator(Value * -3, 0, 0)); 
	//UE_LOG(LogTemp, Log, TEXT("%f"), HeadComp->GetRelativeRotation().Pitch);
}


void ASnakePawn::OnTouchJoyX(float Value)
{
	AxisX = Value;
}

void ASnakePawn::OnTouchJoyY(float Value)
{
	AxisY = Value;
}

// �Ե�ʳ���߼�
void ASnakePawn::EatFood()
{
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("chile"));
	FoodCount++;
	if (FoodCount >= MaxEatFood)
	{
		FoodCount = 0;
		AddSnakeBody();
	}
}

// ��ʼ�ص��¼�
void ASnakePawn::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFoodActor* Food = Cast<AFoodActor>(OtherActor); // �ж��ص����ǲ���ʳ��
	if (Food)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("ssss"));
		Food->GetSnakePawn(this); // ��Food����Լ�
	}
}

// �ж�����
void ASnakePawn::UpdateFaceByJoy()
{
	if (AxisX == 0 && AxisY == 0)
	{
		return;
	}

	// ���ͷ�ĳ�ǰ���������Ӷ��ж�����ң�е������Ƿ����Լ����ж�����һ��
	FVector SnakeHeadDir = HeadComp->GetForwardVector(); // X���������
	FVector JoyDir(AxisX, 0, AxisY); // ң�еķ�������
	float Checkvalue = FVector::DotProduct(HeadComp->GetUpVector(), JoyDir); // ���
	if (Checkvalue > 0.99f)
	{
		return; // �����ӽ��غ��򲻶�
	}

	float DotValue = FVector::DotProduct(SnakeHeadDir, JoyDir); // ͷ��ң�е�������ˣ���>0,������ת����֮����ת
	if (DotValue > 0)
	{
		TurnRight(1); // ��תͷ
	}
	else
	{
		TurnRight(-1); // ��תͷ
	}
}


ASnakePawn* ASnakePawn::GetSnakePawn_Implementation()
{
	return this;
}

// Called every frame
void ASnakePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateMove(DeltaTime); // ʱʱ�̿��ƶ�
	UpdateFaceByJoy();
}

// Called to bind functionality to input
void ASnakePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// �������¼�
	PlayerInputComponent->BindAxis(TEXT("TurnRight"), this, &ASnakePawn::TurnRight);
	PlayerInputComponent->BindAxis(TEXT("TouchJoyX"), this, &ASnakePawn::OnTouchJoyX);
	PlayerInputComponent->BindAxis(TEXT("TouchJoyY"), this, &ASnakePawn::OnTouchJoyY);
	PlayerInputComponent->BindAction(TEXT("AddBody"), IE_Pressed, this, &ASnakePawn::AddSnakeBody);
}

void ASnakePawn::AddSnakeBody()
{
	// ����һ������
	ABodyActor* Body = GetWorld()->SpawnActor<ABodyActor>(ABodyActor::StaticClass());
	// ���Լ������Լ����ɵ�����
	Body->SetSnakePawn(this);

	if (NextNode) // �����һ�������Ƿ�Ϊ��
	{
		NextNode->AddSnakeBody(Body); // ����һ������ȥ����������һ������
	}
	else
	{
		// ����һ������
		NextNode = Body;
		// ����һ�´������λ��
		//Body->SetActorLocation(GetActorLocation() + GetActorUpVector() * -60);
		Body->SetActorLocation(GetActorLocation());
	}
	
}

