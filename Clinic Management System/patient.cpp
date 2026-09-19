#include "patient.h"

int Patient::ID = 1;

Patient::Patient() : Person(ID++) {
	string name, phone, age;
	cout << "Name : ";
	cin.ignore();
	getline(cin, name);
	this->name = name;
	while (true) {
		cout << "\nPhone : ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, phone);
		if (IsValid::isValidPhone(phone)) break;
		else cout << "\n*{ Enter A valid Number! }*\n";
	}
	this->phone = phone;
	while (true) {
		cout << "\nAge : ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, age);
		if (IsValid::isValidAge(age)) break;
		else cout << "\n*{ Enter A valid Age! }*\n";
	}
	this->age = stoi(age);
	cout << "\n";
}

void Patient::display() {
	Person::display();
	cout << age;
	NiceView::spaces(to_string(age));
	cout << phone << "\n\n";
}

int Patient::getAge() { return age; }

string Patient::getPhone() { return phone; }

void Patient::addVisitToHistory(Visit* visit) { history.addVisit(visit); }

void Patient::viewHistory() {
	cout << "------------------------------------------------------\n";
	history.viewVisits();
	cout << "------------------------------------------------------\n";
	cout << "Total paid : " << history.viewFees() << " EGP\n\n";
}