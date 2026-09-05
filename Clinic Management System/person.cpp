#include "person.h"

Person::Person() {
	string name, phone;
	int id;
	cout << "ID : ";
	cin >> id;
	this->id = id;
	cout << "Name : ";
	cin >> name;
	this->name = name;
	cout << "Phone : ";
	cin >> phone;
	this->phone = phone;
}

void Person::view() {
	cout << "ID : " << id << "\n";
	cout << "Name : " << name << "\n";
	cout << "Phone : " << phone << "\n";
}

string Person::getName() { return name; }

int Person::getID() { return id; }