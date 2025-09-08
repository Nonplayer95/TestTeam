#include "OtherActor.h"

AOtherActor::AOtherActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AOtherActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp,Log,TEXT("Written by other!"));
}