#include "pch.h"
#include "CurrentAccount.h"

using namespace System;

CurrentAccount::CurrentAccount(String^ holder, double limit) : BankAccount(holder), overdraftLimit(limit) {};

void CurrentAccount::ChangeOverdraftLimit(double newLimit) {
	overdraftLimit = newLimit;
}

double CurrentAccount::GetOverdraftLimit() {
	return overdraftLimit;
}

String^ CurrentAccount::ToString() {
	return String::Concat(BankAccount::ToString(), "\nOverdraft Limit: ", overdraftLimit.ToString());
}

bool CurrentAccount::CanDebit(double amount) {
	String^ details = RoutingInstructions(amount);
	return (amount <= GetBalance() + overdraftLimit);
}