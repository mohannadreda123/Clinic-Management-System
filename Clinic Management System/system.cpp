#include "System.h"

// Add Functions
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
	room.add_To_Waiting_Room(appointment);
	cout << "[OK] Appointment added.";
	cout << "\n\n";
}

// Display functions
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
void System::viewWaitingRoom() {
	if (room.view_Who_Is_Waiting()) {
		cout << "========================\n";
		cout << "\n";
		return;
	}
	cout << "Waiting Room is Empty!\n";
}
void System::nextPatient() {
	if (room.call_Next_Patient()) { return; }
	cout << "Waiting Room is Empty!\n";
}


void System::searchById(int choice) {
	int id, comparisons;
	if (choice == 1) {
		cout << "Patient ID: ";
		cin >> id;
		Sort::selectionByID(patients);
		int index = Search::binarySearch(patients, id, comparisons);
		if (index != -1) {
			cout << "\nFound in " << comparisons << " comparisons\n";
			patients.at(index).view();
			cout << "=================\n\n";
		}
		else cout << "\nNo patient with ID " << id << "\n\n";
	}
	else if (choice == 2) {
		cout << "Doctor ID: ";
		cin >> id;
		Sort::selectionByID(doctors);
		int index = Search::binarySearch(doctors, id, comparisons);
		if (index != -1) {
			doctors.at(index).view();
			cout << "=================\n\n";
		}
		else cout << "\nNo doctor with ID " << id << "\n\n";
	}
}

void System::sortPatients() {
	int choice, comparisons;
	cout << "Sort By\n(1)Name\n(2)Age\nchoose: ";
	cin >> choice;
	cout << "\n";
	if (choice == 1) {
		comparisons = Sort::selectionByName(patients);
		viewPatients();
		cout << "\nSorted in " << comparisons << " comparisons";
	}
	else if (choice == 2) {
		comparisons = Sort::selectionByAge(patients);
		viewPatients();
		cout << "\nSorted in " << comparisons << " comparisons";
	}
}

void System::deletePatient() {
	int id, comparisons;
	cout << "Patient ID: ";
	cin >> id;
	Sort::selectionByID(patients);
	int index = Search::binarySearch(patients, id, comparisons);
	if (index != -1) {
		patients.erase(patients.begin() + index);
		cout << "[OK] Patient " << id << " deleted.\n";
		cout << "===========================\n\n";
	}
	else cout << "\nNo patient with ID " << id << "\n\n";
}