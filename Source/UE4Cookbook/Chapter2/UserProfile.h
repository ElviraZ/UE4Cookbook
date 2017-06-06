// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "SubclassOf.h"
#include "UserProfile.generated.h"
/**
 * UCLASS()让这个C++类交给UE4管理
 */
UCLASS(Blueprintable,BlueprintType)
class UE4COOKBOOK_API UUserProfile : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		float   Armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		FString  Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Unit)
		TSubclassOf<UObject>  UClassOfPlayer;
	UPROPERTY(EditAnywhere, meta=(MetaClass="GameMode"), Category = Unit)
	FStringClassReference  UClassGameMode;
};
