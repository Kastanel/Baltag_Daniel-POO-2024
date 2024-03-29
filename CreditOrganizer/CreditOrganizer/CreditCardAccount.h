#pragma once
#using <System.dll>
#include "LoyaltyScheme.h"

using namespace System;

ref class CreditCardAccount
{
public:
	literal String^ name = "Super Platinum Card";
	static int GetNumberOfAccounts();
	static CreditCardAccount();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amwount);
	void PrintStatement();
	long GetAccountNumber();

	void RedeemLoyaltyPoints();

private:
	static int numberOfAccounts = 0;
	static double interestRate;
	long accountNumber;
	double currentBalance;
	double creditLimit;

	LoyaltyScheme^ scheme;
};

