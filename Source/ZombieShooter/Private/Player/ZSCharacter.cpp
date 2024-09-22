// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ZSCharacter.h"
#include "Camera/CameraComponent.h"


// Sets default values
AZSCharacter::AZSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void AZSCharacter::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController) 
	{

	}
	
}

// Called to bind functionality to input
void AZSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

