#include "appointment.h"

Appointment::Appointment() {
	string doctorName, patientName, date;
	int priority;
	cout << "Patient Name : ";
	cin >> patientName;
	this->patientName = patientName;
	cout << "Doctor Name : ";
	cin >> doctorName;
	this->doctorName = doctorName;
	cout << "Date : ";
	cin >> date;
	this->date = date;
	cout << "Priority status\n(1) Normal\n\n(2) Emergency\n";
	cin >> priority;
	this->priority = priority;
	cout << "\n\n";
}

void Appointment::display() {
	cout << "Patient Name : " << patientName;
	cout << "\nDoctor Name : " << doctorName;
	cout << "\nDate : " << date;
	if (priority == 1) cout << "\nPriority : Normal";
	else if (priority == 2) cout << "\nPriority : Emergency";
	cout << "\n\n";
}

int Appointment::getPriority() { return priority; }

bool Appointment::operator<(Appointment appointment) {
	return this->priority > appointment.priority;
}