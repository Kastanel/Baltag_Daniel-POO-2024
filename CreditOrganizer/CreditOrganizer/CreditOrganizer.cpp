#include "pch.h"
#include "CreditCardAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{

    Console::WriteLine("Creating account object");
    CreditCardAccount^ account1 = gcnew CreditCardAccount(12345, 2000);
    Console::WriteLine();

    Console::WriteLine("Making a purchase (300)");
    account1->MakePurchase(300);
    Console::WriteLine();

    Console::WriteLine("Making a purchase (700)");
    account1->MakePurchase(700);
    Console::WriteLine();

    Console::WriteLine("Making a purchase (500)");
    account1->MakePurchase(500);
    Console::WriteLine();

    Console::WriteLine("Redeeming points..");
    account1->RedeemLoyaltyPoints();

    return 0;
}
