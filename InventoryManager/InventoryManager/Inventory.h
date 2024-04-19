#pragma once
#include "Product.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Inventory
{
private:
	List<Product^>^ products = gcnew List<Product^>();
	void AddSeedData();

public:
	Inventory() { AddSeedData(); };
	void AddProduct(String^ name, int quantity, double price);
	Product^ FindProductByName(String^ name);
	void UpdateProductQuantity(String^ name, int newQuantity);
	void UpdateProductPrice(String^ name, double newPrice);
	void RemoveProduct(String^ name);
	void PrintInventory();
	void PrintInventoryValue();
	void PrintProduct(String^ name);
	static String^ ReadProductName();
	static int ReadProductQuantity();
	static double ReadProductPrice();
	static void ShowMenu();
	void ImportInventoryFromFile();
	void ExportInventoryToFile();
};
