// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRBase/AWorldButton/AWorldButton.h"
#include "SkeeBall.h"
#include "SpawnBallButton.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ASpawnBallButton : public AWorldButton
{
	GENERATED_BODY()

	ASpawnBallButton();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_pSpawnLocationMesh;

	void OnPressed_Implementation(ABaseController* pController) override;

	ASkeeBall* skeeBall;
};
