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
	HeadComp->SetRelativeLocation(FVector(0, 5, 0)); // 将头稍微向外突出一点

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SphereCollision->SetupAttachment(HeadComp); //只有头能吃食物
	SphereCollision->SetCollisionProfileName(TEXT("OverlapAll")); // 碰撞模式
	SphereCollision->SetSphereRadius(110); // 重叠的半径
	SphereCollision->SetHiddenInGame(false); // 测试一下


	USpringArmComponent* CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetRelativeRotation(FRotator(0, -90, 0)); // 设置旋转
	CameraBoom->bDoCollisionTest = false; // 设置弹簧臂的碰撞为false

	UCameraComponent* MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	MainCamera->SetupAttachment(CameraBoom);
	MainCamera->SetProjectionMode(ECameraProjectionMode::Orthographic); // 设置摄像机的拍摄模式为正交
	MainCamera->SetOrthoWidth(1700); // 设置摄像机能拍到的宽度


	// 初始化
	Speed = 400;
	FoodCount = 0;
	MaxEatFood = 5; // 吃了五个就长一节身体
}

// Called when the game starts or when spawned
void ASnakePawn::BeginPlay()
{
	Super::BeginPlay();
	
	// 绑定开始重叠事件
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ASnakePawn::OnComponentBeginOverlap);

	// 加载资源
	// 是不是玩家操控的角色
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
		// 动态添加Ai组件
		AiComponent = NewObject<USnakeAiComponent>(this, TEXT("AiComponent"));
		AiComponent->RegisterComponent(); // 注册组件 
		
	}
	

}

// 时刻移动
void ASnakePawn::UpdateMove(float DeltaTime)
{
	AddActorWorldOffset(DeltaTime * Speed * HeadComp->GetUpVector()); // 向头的方向行走
	if (NextNode)
	{
		NextNode->AddTrackPointer(GetActorLocation()); // 将自己的位置给下一个蛇身
	}
}

// 转方向
void ASnakePawn::TurnRight(float Value)
{
	// pitch方向旋转
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

// 吃到食物逻辑
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

// 开始重叠事件
void ASnakePawn::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFoodActor* Food = Cast<AFoodActor>(OtherActor); // 判断重叠的是不是食物
	if (Food)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("ssss"));
		Food->GetSnakePawn(this); // 让Food获得自己
	}
}

// 行动方向
void ASnakePawn::UpdateFaceByJoy()
{
	if (AxisX == 0 && AxisY == 0)
	{
		return;
	}

	// 获得头的朝前的向量，从而判断虚拟遥感的向量是否与自己的行动方向一致
	FVector SnakeHeadDir = HeadComp->GetForwardVector(); // X方向的向量
	FVector JoyDir(AxisX, 0, AxisY); // 遥感的方向向量
	float Checkvalue = FVector::DotProduct(HeadComp->GetUpVector(), JoyDir); // 点乘
	if (Checkvalue > 0.99f)
	{
		return; // 向量接近重合则不动
	}

	float DotValue = FVector::DotProduct(SnakeHeadDir, JoyDir); // 头与遥感的向量点乘，若>0,则往右转，反之，左转
	if (DotValue > 0)
	{
		TurnRight(1); // 右转头
	}
	else
	{
		TurnRight(-1); // 左转头
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
	UpdateMove(DeltaTime); // 时时刻刻移动
	UpdateFaceByJoy();
}

// Called to bind functionality to input
void ASnakePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 绑定输入事件
	PlayerInputComponent->BindAxis(TEXT("TurnRight"), this, &ASnakePawn::TurnRight);
	PlayerInputComponent->BindAxis(TEXT("TouchJoyX"), this, &ASnakePawn::OnTouchJoyX);
	PlayerInputComponent->BindAxis(TEXT("TouchJoyY"), this, &ASnakePawn::OnTouchJoyY);
	PlayerInputComponent->BindAction(TEXT("AddBody"), IE_Pressed, this, &ASnakePawn::AddSnakeBody);
}

void ASnakePawn::AddSnakeBody()
{
	// 生成一个身体
	ABodyActor* Body = GetWorld()->SpawnActor<ABodyActor>(ABodyActor::StaticClass());
	// 将自己传给自己生成的身体
	Body->SetSnakePawn(this);

	if (NextNode) // 检查下一个蛇身是否为真
	{
		NextNode->AddSnakeBody(Body); // 让下一个蛇身去生成它的下一个蛇身
	}
	else
	{
		// 下面一个蛇身
		NextNode = Body;
		// 设置一下此蛇身的位置
		//Body->SetActorLocation(GetActorLocation() + GetActorUpVector() * -60);
		Body->SetActorLocation(GetActorLocation());
	}
	
}

