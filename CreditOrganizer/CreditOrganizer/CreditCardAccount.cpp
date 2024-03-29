#include "pch.h"
#include "CreditCardAccount.h"

#using <mscorlib.dll>
using namespace System;

CreditCardAccount::CreditCardAccount(long number, double limit) {
	accountNumber = number;
	creditLimit = limit;
	currentBalance = 0.0;
	numberOfAccounts++;
	scheme = nullptr;
	Console::WriteLine("This is account number {0}", numberOfAccounts);
}

static CreditCardAccount::CreditCardAccount() {
	interestRate = 4.5;
	Console::WriteLine("Static constructor called!");
}

void CreditCardAccount::SetCreditLimit(double amount) {
	creditLimit = amount;
}

bool CreditCardAccount::MakePurchase(double amount) {
	if (currentBalance + amount > creditLimit) {
		return false;
	}
	else {
		currentBalance += amount;

		if (currentBalance >= creditLimit / 2) {
			if (scheme == nullptr) {
				scheme = gcnew LoyaltyScheme();
			}
			else {
				scheme->EarnPointsOnAmount(amount);
			}
		}

		return true;
	}
}

void CreditCardAccount::MakeRepayment(double amount) {
	currentBalance -= amount;
}

void CreditCardAccount::PrintStatement() {
	Console::WriteLine("Current balance: {0}", currentBalance);
}

long CreditCardAccount::GetAccountNumber() {
	return accountNumber;
}

int CreditCardAccount::GetNumberOfAccounts() {
	return numberOfAccounts;
}

void CreditCardAccount::RedeemLoyaltyPoints() {
	if (scheme == nullptr) {
		Console::WriteLine("Sorry, you do not have a loyalty scheme yet!");
		return;
	}

	Console::WriteLine("Available points: {0}", scheme->GetPoints());
	Console::WriteLine("How many points do you want to redeem?");

	String^ input = Console::ReadLine();
	int pointsToRedeem = Convert::ToInt32(input);

	scheme->RedeemPoints(pointsToRedeem);

	Console::WriteLine("Remaining points: {0}", scheme->GetPoints());
}