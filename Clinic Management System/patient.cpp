#include "patient.h"

Patient::Patient() {
	int age;
	cout << "Age : ";
	cin >> age;
	this->age = age; 
	cout << "\n";
}

void Patient::view() {
	Person::view();
	cout << "Age : " << age;
	cout << "\n";
}