// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraBaseCharacter.h"

// Sets default values
AAuraBaseCharacter::AAuraBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAuraBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

