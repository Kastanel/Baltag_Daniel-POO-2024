#pragma once
ref class LoyaltyScheme
{
public:
	LoyaltyScheme();
	void EarnPointsOnAmount(double spentAmount);
	void RedeemPoints(int points);
	int GetPoints();
private:
	int totalPoints;
};

