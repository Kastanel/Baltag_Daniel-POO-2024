#pragma once

#include "BankAccount.h"

using namespace System;

ref class SavingsAccount : BankAccount
{
public:
	SavingsAccount(String^ holder);
	static void SetInterestRate(double rate);
	static double GetInterestRate();

	virtual bool CanDebit(double amount) override;

private:
	static double interestRate;
};

