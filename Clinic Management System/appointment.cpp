#include "appointment.h"

Appointment::Appointment() {
	string doctorId, patientId;
	string priority, date, diagnosis;
	while (true) {
		cout << "Patient ID : ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, patientId);
		if (IsValid::isValidId(patientId)) break;
	}
	this->patientId = stoi(patientId);
	while (true) {
		cout << "\nDoctor ID : ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, doctorId);
		if (IsValid::isValidId(doctorId)) break;
	}
	this->doctorId = stoi(doctorId);

	cout << "\nVisit Date (YYYY-MM-DD) : ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, date);
	this->date = date;
	while (priority != "1" && priority != "2") {
		cout << "\nCase type : (1) Emergency (2) Normal : ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, priority);
		this->priority = priority;
	}
	cout << "\n\n";
}

void Appointment::setPatientName(string name) { patientName = name; }

void Appointment::setIllness(string ill) { illness = ill; }

void Appointment::display() {
	cout << patientName;
	NiceView::spaces(patientName);
	if (priority == "2") cout << "Normal";
	else if (priority == "1") cout << "Emergency";
	cout << "\n\n";
}

bool Appointment::operator>(Appointment appointment)
{ return this->priority > appointment.priority; }

int Appointment::getPatientId() { return patientId; }
int Appointment::getDoctorId() { return doctorId; }
string Appointment::getPriority() { return priority; }
string Appointment::getDate() { return date; }
string Appointment::getIllness() { return illness; }
string Appointment::getPatientName() { return patientName; }