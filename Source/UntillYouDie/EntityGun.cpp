// Fill out your copyright notice in the Description page of Project Settings.

#include "UntillYouDie.h"
#include "EntityGun.h"


// Sets default values
AEntityGun::AEntityGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEntityGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEntityGun::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

