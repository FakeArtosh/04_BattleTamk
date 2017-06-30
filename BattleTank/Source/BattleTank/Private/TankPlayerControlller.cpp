// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerControlller.h"
#include "BattleTank.h"

void ATankPlayerControlller::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("player controller possessing: %s"), *(ControlledTank->GetName()));
	}


	UE_LOG(LogTemp, Warning, TEXT("Warning player controller Begin Play"));
}

ATank* ATankPlayerControlller::GetControlledTank() const

{
	
	return Cast<ATank>(GetPawn());
	
}

