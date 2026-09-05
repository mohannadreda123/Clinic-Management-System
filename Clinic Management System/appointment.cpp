#include "appointment.h"

Appointment::Appointment() {
	string doctorName, patientName;
	string date;
	cout << "Patient Name : ";
	cin >> patientName;
	this->patientName = patientName;
	cout << "Doctor Name : ";
	cin >> doctorName;
	this->doctorName = doctorName;
	cout << "Date : ";
	cin >> date;
	this->date = date;
	cout << "\n\n";
}

void Appointment::display() {
	cout << "Patient Name : " << patientName;
	cout << "\nDoctor Name : " << doctorName;
	cout << "\nDate : " << date;
	cout << "\n\n";
}