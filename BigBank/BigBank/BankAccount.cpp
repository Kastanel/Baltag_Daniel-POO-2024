#include "pch.h"
#include "BankAccount.h"

using namespace System;

BankAccount::BankAccount(String^ holder) : accountHolder(holder), balance(0.0) {};

void BankAccount::Credit(double amount) {
	balance += amount;
}

bool BankAccount::Debit(double amount) {
	if (CanDebit(amount)) {
		balance -= amount;
		return true;
	}
	else {
		return false;
	}
}

double BankAccount::GetBalance() {
	return balance;
}

String^ BankAccount::ToString() {
	return String::Concat("Account holder: ", accountHolder, "\nBalance: ", balance.ToString());;
}

String^ BankAccount::RoutingInstructions(double amount) {
	return "Some string...";
}