// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "VRBase/ABaseEntity/ABaseEntity.h"
#include "SkeeBallMachine.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ASkeeBallMachine : public ABaseEntity
{
	GENERATED_BODY()
	
public: 
	ASkeeBallMachine();
	UFUNCTION(BlueprintCallable)
	void AddToScore(int points);
	UFUNCTION(BlueprintCallable)
	int GetTheScore();
//	virtual void DefaultThink() override;

	//bool m_bHasPlayerWon;
	UStaticMeshComponent* m_pStaticMeshComponent;
};
