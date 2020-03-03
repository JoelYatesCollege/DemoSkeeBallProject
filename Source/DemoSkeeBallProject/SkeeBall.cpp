// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeeBall.h"

ASkeeBall::ASkeeBall() {
	//m_pStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("static mesh");
	//RootComponent = m_pStaticMeshComponent;
	RootComponent = m_pPickupMeshComponent;
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBall.SkeeBall'");
	m_pPickupMeshComponent->SetStaticMesh(mesh);

	float scaleFactor = 1.0f;
	FVector scale = FVector(scaleFactor);
	m_pPickupMeshComponent->SetWorldScale3D(scale);
}


