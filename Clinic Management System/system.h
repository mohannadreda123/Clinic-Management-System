#pragma once
#include <iostream>
#include <vector>
#include "patient.h"
#include "doctor.h"
#include "waitingRoom.h"
#include "dataStructures.h"
#include "searchingAlgorithm.h"
#include "sortingAlgorithm.h"
using namespace std;
class System {
private:
	vector<Patient>patients;
	vector<Doctor>doctors;
	WaitingRoom room;
public:
	// Add Functions
	void addPatient();
	void addDoctor();
	void addAppointment();

	// Display Functions
	void viewPatients();
	void viewDoctors();
	void viewWaitingRoom();
	void nextPatient();


	void searchById(int choice);

	void sortPatients();

	void deletePatient();
};