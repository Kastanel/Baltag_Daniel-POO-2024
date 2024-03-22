#include "pch.h"

using namespace System;

ref class Animal {
public:
    int legs;
    void SetName(String^ name) {
        this->name = name;
    }
    String^ GetName() {
        return this->name;
    }
private:
    String^ name;
};

int main(array<System::String ^> ^args)
{
    Animal cat, dog;

    cat.SetName("Cat");
    cat.legs = 4;

    dog.SetName("Dog");
    dog.legs = 4;

    Console::WriteLine("Animal 1");
    Console::Write("Name:\t");
    Console::WriteLine(cat.GetName());
    Console::Write("Legs:\t");
    Console::WriteLine(cat.legs);
    Console::WriteLine();

    Console::WriteLine("Animal 2");
    Console::Write("Name:\t");
    Console::WriteLine(dog.GetName());
    Console::Write("Legs:\t");
    Console::WriteLine(dog.legs);
    Console::WriteLine();

    return 0;
}
