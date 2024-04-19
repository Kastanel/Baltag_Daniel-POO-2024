#include "pch.h"
#include "Inventory.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Inventory^ inventory = gcnew Inventory();

    int choice;
    String^ name;
    int quantity;
    double price;
    Product^ product;

    Console::WriteLine("\nInventory management system.\n");

    Inventory::ShowMenu();

    do {

        Console::Write("Choose a command: ");
        
        int::TryParse(Console::ReadLine(), choice);

        switch (choice) {
            case 1:
                Console::WriteLine("Adding product...");
                name = Inventory::ReadProductName();
                quantity = Inventory::ReadProductQuantity();
                price = Inventory::ReadProductPrice();
                inventory->AddProduct(name, quantity, price);
                break;
            case 2:
                Console::WriteLine("Finding product...");
                name = Inventory::ReadProductName();
                inventory->PrintProduct(name);
                Console::WriteLine();
                break;
            case 3:
                Console::WriteLine("Deleting product...");
                name = Inventory::ReadProductName();
                inventory->RemoveProduct(name);
                break;
            case 4:
                Console::WriteLine("Updating product quantity...");
                name = Inventory::ReadProductName();
                product = inventory->FindProductByName(name);

                if (product == nullptr) {
                    Console::WriteLine("Product " + name + " is not in stock.\n");
                    break;
                }
                quantity = Inventory::ReadProductQuantity();
                inventory->UpdateProductQuantity(name, quantity);
                break;
            case 5:
                Console::WriteLine("Updating product price...");
                name = Inventory::ReadProductName();
                
                product = inventory->FindProductByName(name);

                if (product == nullptr) {
                    Console::WriteLine("Product " + name + " is not in stock.\n");
                    break;
                }
                price = Inventory::ReadProductPrice();
                inventory->UpdateProductPrice(name, price);
                break;
            case 6:
                inventory->PrintInventoryValue();
                break;
            case 7:
                inventory->PrintInventory();
                break;
            case 8:
                Console::WriteLine("Importing data..");
                inventory->ImportInventoryFromFile();
                break;
            case 9:
                Console::WriteLine("Exporting data..");
                inventory->ExportInventoryToFile();
                break;
            case 10:
                Inventory::ShowMenu();
                break;
            case 11:
                Console::WriteLine("Closing application...");
                break;
            default:
                Console::WriteLine("Invalid option, try again!\n");
        }
    } while (choice != 11);

    return 0;
}
