#include "doctor.h"

int Doctor::ID = 1;

Doctor::Doctor() : Person(ID++) {
	string fee, name, special;
	cout << "Name : ";
	cin.ignore();
	getline(cin, name);
	this->name = name;
	cout << "\nSpecialization : ";
	getline(cin, special);
	specialization = special;
	while (true) {
		cout << "\nConsultant Fees : ";
		cin >> fee;
		if (IsValid::isValidFee(fee)) break;
		else cout << "\n*{ Enter A valid Fees! }*\n";
	}
	consultant_fee = fee;
	cout << "\n\n";
}

void Doctor::display() {
	Person::display();
	cout << specialization;
	NiceView::spaces(specialization);
	cout << consultant_fee << "\n\n";
}

string Doctor::getSpecialization() { return specialization; }

string Doctor::getFee() { return consultant_fee; }