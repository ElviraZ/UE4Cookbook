// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "InputCoreTypes.h"
#include "Action.generated.h"
/**
 * 
 */
UCLASS(BlueprintType,Blueprintable,meta=(ShortToolTip="Base class for any Action typr"))
class UE4COOKBOOK_API UAction : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		FString   Text;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		FKey  Shortcutkey;
	
};
