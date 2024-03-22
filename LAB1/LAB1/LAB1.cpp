#include "pch.h"
#include <iostream>

using namespace System;

struct Persoana
{
	unsigned vs;
	char nume[20];
	char prenume[20];
};

class Pers {
private:
	unsigned vs;
	char nume[20];
	char prenume[20];
public:
	Pers(unsigned vs, char* nume, char* prenume) {
		this->vs = vs;
		strcpy_s(this->nume, 20, nume);
		strcpy_s(this->prenume, 20, prenume);
	}
	Pers() {}
	unsigned arata_vs() { return this->vs; }
	char* arata_nume() { return this->nume; }
};

class Book {
private:
	char name[50];
	char author[50];
	unsigned int release_year;
	unsigned int age;

public:
	Book(char* name, char* author, unsigned int release_year) {
		strcpy_s(this->name, name);
		strcpy_s(this->author, author);
		this->release_year = release_year;
		this->age = 2024 - this->release_year;
	}
	char* get_name() { return this->name; }
	char* get_author() { return this->author; }
	unsigned int get_release_year() { return this->release_year; }
	unsigned int get_age() { return this->age; }
	void print() {
		std::cout << "Name: " << this->get_name() << std::endl;
		std::cout << "Author: " << this->get_author() << std::endl;
		std::cout << "Released year: " << this->get_release_year() << std::endl;
		std::cout << "Age: " << this->get_age() << std::endl;
	}
};

int main(array<System::String^>^ args)
{
	using namespace std;

	Console::WriteLine("Introduceti numarul de persoane: ");

	int nr_persoane = 0;

	cin >> nr_persoane;

	Persoana* persoane = new Persoana[nr_persoane];
	for (int i = 0; i < nr_persoane; i++) {
		Console::WriteLine("Introduceti numele persoanei {0}:", i + 1);
		char nume[20];
		cin >> nume;
		strcpy_s(persoane[i].nume, 20, nume);

		Console::WriteLine("Introduceti prenumele persoanei {0}:", i + 1);
		char prenume[20];
		cin >> prenume;
		strcpy_s(persoane[i].prenume, 20, prenume);

		Console::WriteLine("Introduceti varsta persoanei {0}:", i + 1);
		int vs;
		cin >> vs;
		persoane[i].vs = vs;
	}

	Console::WriteLine("Afisam numele persoanelor si varstele aferente: ");
	for (int i = 0; i < nr_persoane; i++) {
		cout << persoane[i].nume << "\t" << persoane[i].prenume << "\t" << persoane[i].vs << endl;
	}

	Console::WriteLine("Introduceti datele cartii.");
	Console::WriteLine();
	
	Console::WriteLine("Name: ");
	char name[50];
	cin >> name;

	Console::WriteLine("Author: ");
	char author[50];
	cin >> author;

	Console::WriteLine("Release year: ");
	unsigned int release_year;
	cin >> release_year;

	Book* book = new Book(name, author, release_year);
	book->print();
	
	return 0;
}
