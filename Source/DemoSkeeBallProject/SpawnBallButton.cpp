// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnBallButton.h"

ASpawnBallButton::ASpawnBallButton() {
	m_pSpawnLocationMesh = CreateDefaultSubobject<UStaticMeshComponent>("static mesh");
	UStaticMesh* spawnLocationMesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBall.SkeeBall'");
	m_pSpawnLocationMesh->SetStaticMesh(spawnLocationMesh);

	RootComponent = m_pMeshComponent;
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'");
	m_pMeshComponent->SetStaticMesh(mesh);

	float scaleFactor = 0.1f;
	FVector scale = FVector(scaleFactor);
	m_pMeshComponent->SetWorldScale3D(scale);
}

void ASpawnBallButton::OnPressed_Implementation(ABaseController* pController) {
	FVector loc = m_pSpawnLocationMesh->GetComponentLocation();
	if (!skeeBall) {
		skeeBall = (ASkeeBall*)GetWorld()->SpawnActor(ASkeeBall::StaticClass(), &loc);
	}
	skeeBall->SetActorHiddenInGame(true);
	skeeBall->SetActorHiddenInGame(false);
	skeeBall->SetActorLocation(loc);
}


