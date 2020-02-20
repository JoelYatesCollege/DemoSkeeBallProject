// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoSkeeBallProjectGameModeBase.h"

void ADemoSkeeBallProjectGameModeBase::BeginPlay() {
	m_iScore = 0;
}

void ADemoSkeeBallProjectGameModeBase::SetScore(int newScore) {
	m_iScore = newScore;
}

int ADemoSkeeBallProjectGameModeBase::GetScore() {
	return m_iScore;
}