#include "pch.h"
#include "Inventory.h"
#include <exception>

using namespace System::IO;

void Inventory::AddProduct(String^ name, int quantity, double price)
{
	if (quantity < 0 || price < 0) {
		Console::WriteLine("Invalid product! Quantity and Price must be positive values!\n");
		return;
	}
	Product^ product = FindProductByName(name);

	if (product != nullptr) {
		Console::WriteLine("Product already present. Updated quantity & price.\n");
		product->SetQuantity(quantity);
		product->SetPrice(price);
	}
	else {
		Product^ product = gcnew Product(name, quantity, price);
		products->Add(product);
		Console::WriteLine(name + " added to stock.\n");
	}
}

Product^ Inventory::FindProductByName(String^ name)
{
	for each (Product^ product in products)
	{
		if (product->GetName()->ToLower()->Equals(name->ToLower())) {
			return product;
		}
	}
	return nullptr;
}

void Inventory::UpdateProductQuantity(String^ name, int newQuantity)
{
	Product^ product = FindProductByName(name);
	product->SetQuantity(newQuantity);
}

void Inventory::UpdateProductPrice(String^ name, double newPrice)
{
	Product^ product = FindProductByName(name);
	product->SetPrice(newPrice);
}

void Inventory::RemoveProduct(String^ name)
{
	Product^ product = FindProductByName(name);

	if (product != nullptr) {
		products->Remove(product);
		Console::WriteLine("Product " + name + " has been deleted from inventory.\n");
	}
	else {
		Console::WriteLine("Product " + name + " is not in stock.\n");
	}
}

void Inventory::PrintInventory()
{
	Console::WriteLine("Inventory:");
	if (products->Count == 0) {
		Console::WriteLine("-\n");
		return;
	};
	for each (Product ^ product in products)
	{
		product->Print();
	}
	Console::WriteLine();
}

void Inventory::PrintInventoryValue()
{
	double sum = 0;
	for each (Product ^ product in products)
	{
		sum += product->GetQuantity() * product->GetPrice();
	}
	Console::WriteLine("Inventory value is: " + sum + ".\n");
}

void Inventory::PrintProduct(String^ name)
{
	Product^ product = FindProductByName(name);

	if (product != nullptr) {
		product->Print();
	}
	else {
		Console::WriteLine("Product " + name + " is not in stock.\n");
	}
}

String^ Inventory::ReadProductName()
{
	String^ name;

	Console::Write("name: ");
	name = Console::ReadLine();

	while (String::IsNullOrWhiteSpace(name))
	{
		Console::WriteLine("Invalid name! Try again!");
		Console::Write("name: ");
		name = Console::ReadLine();
	}
	return name;
}

int Inventory::ReadProductQuantity()
{
	int quantity;
	Console::Write("quantity: ");
	while (!int::TryParse(Console::ReadLine(), quantity))
	{
		Console::WriteLine("Invalid quantity! Try again!");
		Console::Write("quantity: ");
	}
	return quantity;
}

double Inventory::ReadProductPrice()
{
	double price;
	Console::Write("price: ");

	while (!double::TryParse(Console::ReadLine(), price))
	{
		Console::WriteLine("Invalid price! Try again!");
		Console::Write("price: ");
	}
	return price;
}

void Inventory::ShowMenu()
{
	Console::WriteLine("---------------------------------------");
	Console::WriteLine("| 1. Add product.                     |");
	Console::WriteLine("| 2. Find product.                    |");
	Console::WriteLine("| 3. Delete product.                  |");
	Console::WriteLine("| 4. Update product quantity.         |");
	Console::WriteLine("| 5. Update product price.            |");
	Console::WriteLine("| 6. Calculate inventory value.       |");
	Console::WriteLine("| 7. Show inventory.                  |");
	Console::WriteLine("| 8. Import inventory.                |");
	Console::WriteLine("| 9. Export inventory.                |");
	Console::WriteLine("| 10. Show menu.                      |");
	Console::WriteLine("| 11. Quit system.                    |");
	Console::WriteLine("---------------------------------------\n");
}

void Inventory::ImportInventoryFromFile()
{
	String^ path;
	Console::Write("Path to file: ");
	path = Console::ReadLine();

	READING_IMPORT_PATH:
	while (String::IsNullOrWhiteSpace(path))
	{
		Console::WriteLine("Path to file must be valid! Try again!");
		Console::Write("Path to file: ");
		path = Console::ReadLine();
	}

	StreamReader^ sr = nullptr;
	List<Product^>^ importedProducts = gcnew List<Product^>();

	try
	{
		sr = File::OpenText(path->Trim()->Replace("\"", "")->Replace("'", ""));
		
		String^ line = sr->ReadLine(); //reading the header
		while ((line = sr->ReadLine()) != nullptr)
		{

			array<String^>^ split = line->Replace("\"", "")->Split(';');
			if (line->Equals("\n")) {
				continue;
			}
			if (split->Length != 3) {
				Console::WriteLine("Invalid CSV file, could not proceed with import.");
				return;
			}
			importedProducts->Add(gcnew Product(split[0], Convert::ToInt32(split[1]), Convert::ToDouble(split[2])));
		}

		if (importedProducts->Count > 0) {
			products = importedProducts;
			Console::WriteLine("Imported " + importedProducts->Count + " products!");
		}
		else {
			Console::WriteLine("File is empty, nothing to import!");
		}
	}
	catch (Exception^ e)
	{
		Console::WriteLine("Exception ocurred while using provided path.\n" + e->Message);
		path = "";
		goto READING_IMPORT_PATH;
	}
	finally {
		if (sr != nullptr) {
			sr->Close();
		}
	}
}

void Inventory::ExportInventoryToFile()
{
	String^ path;
	Console::Write("Path to file: ");
	path = Console::ReadLine();

	READING_EXPORT_PATH:
	while (String::IsNullOrWhiteSpace(path))
	{
		Console::WriteLine("Path to file must be valid! Try again!");
		Console::Write("Path to file: ");
		path = Console::ReadLine();
	}

	StreamWriter^ sw = nullptr;

	try
	{
		sw = File::CreateText(path->Trim()->Replace("\"", "")->Replace("'", ""));
		String^ header = "\"name\"; \"quantity\"; \"price\"";
		sw->WriteLine(header);

		for each (Product ^ product in products)
		{
			sw->WriteLine("\"" + product->GetName() + "\"; \"" + product->GetQuantity() + "\"; \"" + product->GetPrice() + "\"");
		}

		Console::WriteLine("Inventory successfully exported!");
	}
	catch (Exception^ e)
	{
		Console::WriteLine("Exception ocurred while using provided path.\n" + e->Message);
		path = "";
		goto READING_EXPORT_PATH;
	}
	finally {
		if (sw != nullptr) {
			sw->Close();
		}
	}
}

void Inventory::AddSeedData()
{
	products->Add(gcnew Product("iPhone 13", 50, 799.00));
	products->Add(gcnew Product("Samsung Galaxy S21", 40, 999.99));
	products->Add(gcnew Product("MacBook Air", 30, 999.00));
	products->Add(gcnew Product("Dell XPS 13", 25, 1099.99));
	products->Add(gcnew Product("Sony PlayStation 5", 20, 499.99));
	products->Add(gcnew Product("Nintendo Switch", 35, 299.99));
	products->Add(gcnew Product("Apple AirPods Pro", 60, 249.00));
	products->Add(gcnew Product("Bose QuietComfort 45", 15, 329.00));
	products->Add(gcnew Product("Fitbit Charge 5", 45, 179.95));
	products->Add(gcnew Product("Amazon Echo Dot (4th Gen)", 70, 49.99));
}
