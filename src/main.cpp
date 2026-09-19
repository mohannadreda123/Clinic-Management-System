#include <iostream>
#include "system.h"
#include "UI.h"
using namespace std;
int main()
{
	UI ui;
	System manager;
	string choice;
	do {
		choice = ui.start();
		if (choice == "1") {
			string Pchoice;
			do {
				Pchoice = ui.patient();
				if (Pchoice == "1") manager.addPatient();
				else if (Pchoice == "2") manager.viewPatients();
				else if (Pchoice == "3") manager.search_PatientBy_Id();
				else if (Pchoice == "4") manager.sortPatients();
				else if (Pchoice == "5") manager.deletePatient();
				else if (Pchoice == "6") manager.viewPatientHistory();
				else if (Pchoice != "0") cout << "Invalid Choise!\n\n";
			} while (Pchoice != "0");
		}
		else if (choice == "2") {
			string Dchoice;
			do {
				Dchoice = ui.doctor();
				if (Dchoice == "1") manager.addDoctor();
				else if (Dchoice == "2") manager.viewDoctors();
				else if (Dchoice == "3") manager.search_Doctor_By_Id();
				else if (Dchoice != "0") cout << "Invalid Choise!\n\n";
			} while (Dchoice != "0");
		}
		else if (choice == "3") {
			string Wchoice;
			do {
				Wchoice = ui.waiting();
				if (Wchoice == "1") manager.addAppointment();
				else if (Wchoice == "2") manager.viewWaitingRoom();
				else if (Wchoice == "3") manager.callNextPatient();
				else if (Wchoice != "0") cout << "Invalid Choise!\n\n";
			} while (Wchoice != "0");
		}
		else if (choice != "0") { cout << "Invalid Choise!\n\n"; }
	} while (choice != "0");
	return 0;
}