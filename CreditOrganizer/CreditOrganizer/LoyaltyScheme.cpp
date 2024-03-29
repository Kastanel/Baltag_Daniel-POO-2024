#include "pch.h"
#include "LoyaltyScheme.h"
#using <mscorlib.dll>

using namespace System;

LoyaltyScheme::LoyaltyScheme() {
	Console::WriteLine("Congratulations, you now qualify for bonus points!");
	totalPoints = 0;
}

void LoyaltyScheme::EarnPointsOnAmount(double spentAmount) {
	int earnedPoints = (int)(spentAmount / 10);
	totalPoints += earnedPoints;

	Console::WriteLine("New bonus points earned {0}", earnedPoints);
}

void LoyaltyScheme::RedeemPoints(int pointsToRedeem) {
	if (pointsToRedeem <= totalPoints) {
		totalPoints -= pointsToRedeem;
	}
	else {
		totalPoints = 0;
	}
}

int LoyaltyScheme::GetPoints() {
	return totalPoints;
}