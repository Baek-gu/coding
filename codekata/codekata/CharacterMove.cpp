#include "MyActorMove.h"


AMyActorMove::AMyActorMove()
{
 
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActorMove::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("엑터가 Spawn되었고, 이동을 시작합니다."));
	
}

void AMyActorMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}