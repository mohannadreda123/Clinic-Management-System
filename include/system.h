#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "patient.h"
#include "doctor.h"
#include "waitingRoom.h"
#include "normalVisit.h"
#include "visitHistory.h"
#include "emergencyVisit.h"
#include "priorityQueue.h"
#include "searchingAlgorithm.h"
#include "sortingAlgorithm.h"
using namespace std;
class System {
private:
	vector<Patient>patients;
	vector<Doctor>doctors;
	WaitingRoom room;
public:
	// Patient Functions
	void addPatient();
	void viewPatients();
	Appointment* addToHistory();
	void viewPatientHistory();
	void search_PatientBy_Id();
	void sortPatients();
	void deletePatient();

	// Doctor Functions
	void addDoctor();
	void viewDoctors();
	void search_Doctor_By_Id();

	// Waiting Room Functions
	void addAppointment();
	void viewWaitingRoom();
	void callNextPatient();
};