#include "pch.h"
#include "Product.h"

using namespace System;

Product::Product(String^ name, int quantity, double price) {
	String::IsNullOrWhiteSpace(name) ? throw gcnew ArgumentException("Product name is required!") : this->name = name;
	quantity < 0 ? throw gcnew ArgumentException("Quantity must be greater or equal than 0!") : this->quantity = quantity;
	price < 0 ? throw gcnew ArgumentException("Price must be greater or equal than 0!") : this->price = price;
}

void Product::SetQuantity(int quantity) {
	if (quantity < 0) {
		Console::WriteLine("Quantity not updated! Quantity should be greater or equal than 0!");
	}
	else {
		this->quantity = quantity;
		Console::WriteLine("The quantity for " + this->name + " has been updated to " + quantity + ".");
	}
}

void Product::SetPrice(double price) {
	if (price < 0) {
		Console::WriteLine("Price not updated! Price should be greater or equal than 0!");
	}
	else {
		this->price = price;
		Console::WriteLine("The price for " + this->name + " has been updated to " + price + ".");
	}
}

void Product::Print() {
	Console::WriteLine(this->name + ", Quantity: " + this->quantity + ", Price: " + this->price);
}