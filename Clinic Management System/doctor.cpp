#include "doctor.h"

Doctor::Doctor() {
	double consultant_fee;
	string specialization;
	cout << "Specialization : ";
	cin >> specialization;
	this->specialization = specialization;
	cout << "Consultant Fees : ";
	cin >> consultant_fee;
	this->consultant_fee = consultant_fee;
	cout << "\n\n";
}

void Doctor::view() {
	Person::view();
	cout << "Specialization : " << specialization;
	cout << "\nConsultant Fees : " << consultant_fee;
	cout << "\n\n";
}