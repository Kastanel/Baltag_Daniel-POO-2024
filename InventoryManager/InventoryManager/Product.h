#pragma once
using namespace System;

ref class Product
{
private:
	String^ name;
	int quantity;
	double price;

public:
	Product(String^ name, int quantity, double price);

	String^ GetName() { return this->name; }
	int GetQuantity() { return this->quantity; }
	double GetPrice() { return this->price; }

	void SetQuantity(int quantity);
	void SetPrice(double price);

	void Print();
};
