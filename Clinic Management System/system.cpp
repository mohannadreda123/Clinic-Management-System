#include "System.h"

// Patient Functions
void System::addPatient() {
	Patient patient;
	patients.push_back(patient);
	cout << "[OK] Patient " << patient.getID() << " added.\n\n";
}
void System::viewPatients() {
	if (patients.empty()) {
		cout << "*{ There are No registered Patients to Display }*\n\n\n";
		return;
	}
	cout << "ID\t\t\tNAME    \t\tAGE     \t\tPHONE\n";
	cout << "--\t\t\t----\t\t\t---\t\t\t-----\n";
	for (int i = 0; i < patients.size(); i++) patients.at(i).display();
	cout << "\n";
}
void System::sortPatients() {
	if (patients.empty()) {
		cout << "*{ There are No registered patients to sort }*\n\n";
		return;
	}
	string choice;
	int comparisons;
	do {
		cout << "Sort By (1) Name (2) Age : ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, choice);
		cout << "\n";
		if (choice == "1") {
			comparisons = Sort::selectionByName(patients);
			viewPatients();
			cout << "*{ Sorted in " << comparisons << " comparisons }*\n\n";
			break;
		}
		else if (choice == "2") {
			comparisons = Sort::selectionByAge(patients);
			viewPatients();
			cout << "*{ Sorted in " << comparisons << " comparisons }*\n\n";
			break;
		}
		else cout << "*{ Invalid Choise! }*\n\n";
	} while (true);
}
void System::deletePatient() {
	if (patients.empty()) {
		cout << "*{ There are No patients to delete }*\n\n";
		return;
	}
	string id;
	while (true) {
		cout << "Patient ID: ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, id);
		if (IsValid::isValidId(id)) break;
		else cout << "\n*{ Enter A valid ID! }*\n";
	}
	Sort::selectionByID(patients);
	int index = Search::binarySearch(patients, stoi(id));
	if (index != -1) {
		patients.erase(patients.begin() + index);
		cout << "\n[OK] Patient " << id << " deleted.\n";
		cout << "=========================\n\n";
		return;
	}
	cout << "\n*{ No patient with ID " << id << " }*\n\n";
}
void System::search_PatientBy_Id() {
	string id;
	if (patients.empty()) {
		cout << "*{ No patients registered yet }*\n\n";
		return;
	}
	while (true) {
		cout << "Patient ID: ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, id);
		if (IsValid::isValidId(id)) break;
		else cout << "\n*{ Enter A valid ID! }*\n";
	}
	Sort::selectionByID(patients);
	int index = Search::binarySearch(patients, stoi(id));
	if (index != -1) {
		cout << "\nID : " << patients.at(index).getID() << "\n\n";
		cout << "Name : " << patients.at(index).getName() << "\n\n";
		cout << "Age : " << patients.at(index).getAge() << "\n\n";
		cout << "Phone : " << patients.at(index).getPhone() << "\n\n";
		cout << "=========================\n\n";
	}
	else cout << "\n*{ No Patient with ID " << id  << " }*\n\n";
}
Appointment* System::addToHistory() {
	Appointment* app = room.call_Next_Patient();
	Sort::selectionByID(patients);
	int pIndex = Search::binarySearch(patients, app->getPatientId());
	Sort::selectionByID(doctors);
	int dIndex = Search::binarySearch(doctors, app->getDoctorId());
	Visit* v = nullptr;
	if (app->getPriority() == "1") v = new EmergencyVisit(app->getDate(), doctors[dIndex].getName(), app->getIllness(), stof(doctors[dIndex].getFee()));
	else v = new NormalVisit(app->getDate(), doctors[dIndex].getName(), app->getIllness(), stof(doctors[dIndex].getFee()));
	patients.at(pIndex).addVisitToHistory(v);
	return app;
}
void System::viewPatientHistory() {
	string id;
	while (true) {
		cout << "Patient ID: ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, id);
		if (IsValid::isValidId(id)) break;
		else cout << "\n*{ Enter A valid ID! }*\n";
	}
	cout << "\n";
	Sort::selectionByID(patients);
	int index = Search::binarySearch(patients, stoi(id));
	if (index != -1) {
		cout << "VISIT HISTORY -  " << patients.at(index).getName() << "\n";
		patients[index].viewHistory();
	}
	else cout << "*{ No Patient with ID " << id << " }*\n\n";
}

// Doctor Function
void System::addDoctor() {
	Doctor doctor;
	doctors.push_back(doctor);
	cout << "[OK] Doctor " << doctor.getID() << " added.\n\n";
}
void System::viewDoctors() {
	if (doctors.empty()) {
		cout << "*{ There are No registered doctors to display }*\n\n";
		return;
	}
	cout << "ID\t\t\tNAME    \t\tSPECIALIZATION\t\tFEES\n";
	cout << "--\t\t\t----\t\t\t--------------\t\t----\n";
	for (int i = 0; i < doctors.size(); i++) doctors.at(i).display();
	cout << "\n";
}
void System::search_Doctor_By_Id() {
	string id;
	if (doctors.empty()) {
		cout << "*{ No doctors registered yet }*\n\n";
		return;
	}
	while (true) {
		cout << "Doctor ID: ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, id);
		if (IsValid::isValidId(id)) break;
	}
	Sort::selectionByID(doctors);
	int index = Search::binarySearch(doctors, stoi(id));
	if (index != -1) {
		cout << "\nID : " << doctors.at(index).getID() << "\n\n";
		cout << "Name : " << doctors.at(index).getName() << "\n\n";
		cout << "Specialization : " << doctors.at(index).getSpecialization() << "\n\n";
		cout << "Consultation Fees : " << doctors.at(index).getFee() << "\n\n";
		cout << "=================\n\n";
	}
	else cout << "\n*{ No doctor with ID " << id << " }*\n\n";
}

// Waiting Room functions
void System::addAppointment() {
	Appointment* appointment = new Appointment;
	Sort::selectionByID(patients);
	int pIndex = Search::binarySearch(patients, appointment->getPatientId());
	Sort::selectionByID(doctors);
	int dIndex = Search::binarySearch(doctors, appointment->getDoctorId());
	if (pIndex == -1) {
		cout << "*{ No Patient with ID: " << appointment->getPatientId() << " }*\n\n";
		delete appointment;
		return;
	}
	appointment->setPatientName(patients.at(pIndex).getName());
	if (dIndex == -1) {
		cout << "*{ No Doctor with ID: " << appointment->getDoctorId() << " }*";
		cout << "\t{ Assign A valid ID }\n\n";
		delete appointment;
		return;
	}
	appointment->setIllness(doctors.at(dIndex).getSpecialization());
	if (!room.add_To_Waiting_Room(appointment)) {
		cout << "[OK] " << patients.at(pIndex).getName() << " added as ";
		cout << (appointment->getPriority() == "1" ? "Emergency\n\n" : "Normal\n\n");
	}
}
void System::viewWaitingRoom() {
	if (room.view_Who_Is_Waiting()) {
		cout << "=========================================================\n";
		cout << "\n";
		return;
	}
	cout << "*{ Waiting Room is Empty! }*\n";
}
void System::callNextPatient() {
	if (room.isEmpty()) {
		cout << "*{ Waiting room is empty! }*\n\n";
		return;
	}
	Appointment* app = addToHistory();
	Sort::selectionByID(patients);
	int pIndex = Search::binarySearch(patients, app->getPatientId());
	cout << ">>> NOW CALLING: " << patients.at(pIndex).getName() << "\t";
	if (app->getPriority() == "1") cout << "[Emergency]\n\n";
	else cout << "[Normal]\n\n";
	Sort::selectionByID(doctors);
	int dIndex = Search::binarySearch(doctors, app->getDoctorId());
	cout << "Doctor    : Dr. " << doctors.at(dIndex).getName() << "\n";
	cout << "Diagnosis : " << app->getIllness() << "\n";
	if (app->getPriority() == "1") cout << "Fee : " << stof(doctors[dIndex].getFee()) + 150 << "\n";
	else  cout << "Fee : " << doctors.at(dIndex).getFee() << "\n";
	if (room.isEmpty()) cout << "[OK] Visit added to history. Waiting room is empty.\n\n";
	else cout << "[OK] Visit added to history. " << room.remain() << " patient still waiting.\n\n";
}