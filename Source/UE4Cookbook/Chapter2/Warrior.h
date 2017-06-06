// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnrealString.h"
#include "LogMacros.h"
#include "Warrior.generated.h"

UCLASS()
class UE4COOKBOOK_API AWarrior : public AActor
{
	GENERATED_BODY()




public:	
	// Sets default values for this actor's properties
	AWarrior();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = Properties)
		void  SSSSSSSS();




public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		FString  Name="SSSSSSSSSS";


};
