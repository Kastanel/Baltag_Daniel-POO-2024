#include "pch.h"
#include "SavingsAccount.h"

using namespace System;

SavingsAccount::SavingsAccount(String^ holder) : BankAccount(holder) {};

void SavingsAccount::SetInterestRate(double rate) {
	interestRate = rate;
}

double SavingsAccount::GetInterestRate() {
	return interestRate;
}

bool SavingsAccount::CanDebit(double amount) {
	return (amount <= GetBalance() / 10);
}