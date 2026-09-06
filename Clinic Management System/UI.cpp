#include "UI.h"

int UI::start() {
	cout << "=========================================\n";
	cout << "\tCLINIC MANAGEMENT SYSTEM\n";
	cout << "=========================================\n";
	cout << "1. Patients\n2. Doctors\n3. Waiting Room\n0. Exit\n";
	cout << "----------------------------------------\n";
	cout << "Choose: ";
	int choice;
	cin >> choice;
	cout << "\n\n";
	return choice;
}

int UI::patient() {
	cout << "--------------- PATIENTS ---------------\n";
	cout << "1. Add patient\n2. View all patients\n3. Search by ID\n";
	cout << "4. Sort patients\n5. Delete patient\n6. View patient history\n";
	cout << "0. Back\n----------------------------------------\n";
	cout << "Choose: ";
	int choice;
	cin >> choice;
	system("cls");
	return choice;
}

int UI::doctor() {
	cout << "--------------- DOCTORS ---------------\n";
	cout << "1. Add doctor\n2. View all doctors\n3. Search by ID\n";
	cout << "0. Back\n---------------------------------------\n";
	cout << "Choose: ";
	int choice;
	cin >> choice;
	system("cls");
	return choice;
}

int UI::waiting() {
	cout << "--------------- WAITING ROOM ---------------\n";
	cout << "1. Add Appointment to waiting room\n2. View who is waiting\n";
	cout << "3. Call next patient\n0. Back\n";
	cout << "--------------------------------------------\n";
	cout << "Choose: ";
	int choice;
	cin >> choice;
	system("cls");
	return choice;
}