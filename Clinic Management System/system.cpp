#include "System.h"

void System::addPatient() {
	Patient patient;
	patients.push_back(patient);
	cout << "[OK] Patient " << patient.getID() << " added.";
	cout << "\n\n";
}

void System::addDoctor() {
	Doctor doctor;
	doctors.push_back(doctor);
	cout << "[OK] Doctor " << doctor.getID() << " added.";
	cout << "\n\n";
}

void System::addAppointment() {
	Appointment appointment;
	appointments.push_back(appointment);
	cout << "[OK] Appointment added.";
	cout << "\n\n";
}

void System::viewPatients() {
	for (int i = 0; i < patients.size(); i++) {
		patients.at(i).view();
		cout << "========================\n";
	}
	cout << "\n";
}

void System::viewDoctors() {
	for (int i = 0; i < doctors.size(); i++) {
		doctors.at(i).view();
		cout << "========================\n";
	}
	cout << "\n";
}

void System::viewAppointments() {
	for (int i = 0; i < appointments.size(); i++) {
		appointments.at(i).display();
		cout << "========================\n";
	}
	cout << "\n";
}