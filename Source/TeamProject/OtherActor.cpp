#include "OtherActor.h"

// Sets default values
AOtherActor::AOtherActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOtherActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOtherActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

