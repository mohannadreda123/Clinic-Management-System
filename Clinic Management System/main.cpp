#include <iostream>
#include "system.h"
#include "UI.h"
using namespace std;

int main()
{
	UI ui;
	System manager;
	int choice;
	do {
		choice = ui.start();
		switch (choice) {
		case 1: {
			switch (ui.patient()) {
			case 1: {
				manager.addPatient();
				break;
			}
			case 2: {
				manager.viewPatients();
				break;
			}
			case 3: {
				manager.searchById(choice);
				break;
			}
			case 4: {
				manager.sortPatients();
				break;
			}
			case 5: {
				manager.deletePatient();
				break;
			}
			//case 6: {
			//	manager.sortPatients();
			//	break;
			//}
			}
			break;
		}
		case 2: {
			switch (ui.doctor()) {
			case 1: {
				manager.addDoctor();
				break;
			}
			case 2: {
				manager.viewDoctors();
				break;
			}
			case 3: {
				manager.searchById(choice);
				break;
			}
			}
			break;
		}
		case 3: {
			switch (ui.waiting()) {
			case 1: {
				manager.addAppointment();
				break;
			}
			case 2: {
				manager.viewWaitingRoom();
				break;
			}
			case 3: {
				manager.nextPatient();
				break;
			}
			}
			break;
		}
		}
	} while (choice != 0);
	return 0;
}