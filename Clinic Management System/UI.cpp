#include "UI.h"

string UI::start() {
	cout << "\t\t\t\t\t============================================\n";
	cout << "\t\t\t\t\t\t* CLINIC MANAGEMENT SYSTEM *\n";
	cout << "\t\t\t\t\t============================================\n";
	cout << "1. Patients\n2. Doctors\n3. Waiting Room\n0. Exit\n";
	cout << "================================\n";
	cout << "Choose: ";
	string choice;
	cin >> choice;
	cout << "\n\n";
	return choice;
}

string UI::patient() {
	cout << "\t\t\t\t\t============================================\n";
	cout << "\t\t\t\t\t\t\t* PATIENT *\n";
	cout << "\t\t\t\t\t============================================\n";
	cout << "1. Add patient\n2. View all patients\n3. Search by ID\n";
	cout << "4. Sort patients\n5. Delete patient\n6. View patient history\n";
	cout << "0. Back\n================================\n";
	cout << "Choose: ";
	string choice;
	cin >> choice;
	system("cls");
	return choice;
}

string UI::doctor() {
	cout << "\t\t\t\t\t============================================\n";
	cout << "\t\t\t\t\t\t\t * DOCTOR *\n";
	cout << "\t\t\t\t\t============================================\n";
	cout << "1. Add doctor\n2. View all doctors\n3. Search by ID\n";
	cout << "0. Back\n================================\n";
	cout << "Choose: ";
	string choice;
	cin >> choice;
	system("cls");
	return choice;
}

string UI::waiting() {
	cout << "\t\t\t\t\t============================================\n";
	cout << "\t\t\t\t\t\t      * WAITING ROOM *\n";
	cout << "\t\t\t\t\t============================================\n";
	cout << "1. Add to waiting room\n2. View who is waiting\n";
	cout << "3. Call next patient\n0. Back\n";
	cout << "================================\n";
	cout << "Choose: ";
	string choice;
	cin >> choice;
	system("cls");
	return choice;
}