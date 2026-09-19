#pragma once
#include <iostream>
#include <string>
#include "isValid.h"
#include "niceView.h"

using namespace std;
class Appointment {
private:
	int doctorId, patientId;
	string date, illness, patientName, priority;
public:
	Appointment();
	void setPatientName(string name);
	void setIllness(string ill);
	void display();
	string getPriority();
	int getPatientId();
	string getPatientName();
	int getDoctorId();
	string getDate();
	string getIllness();
	bool operator>(Appointment appointment);
};