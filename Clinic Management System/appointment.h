#pragma once
#include <iostream>
using namespace std;
class Appointment {
private:
	string doctorName, patientName, date;
	int priority;
public:
	Appointment();
	void display();
	int getPriority();
	bool operator<(Appointment appointment);
};