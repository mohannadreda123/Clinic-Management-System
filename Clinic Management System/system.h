#pragma once
#include <iostream>
#include <vector>
#include "patient.h"
#include "doctor.h"
#include "Appointment.h"
using namespace std;
class System {
private:
	vector<Patient>patients;
	vector<Doctor>doctors;
	vector<Appointment>appointments;
public:
	int start();
	int patient();
	int doctor();
	int appointment();
	int waiting();
	void addPatient();
	void addDoctor();
	void addAppointment();
	void viewPatients();
	void viewDoctors();
	void viewAppointments();
};