// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy01.h"

// Sets default values
AEnemy01::AEnemy01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

