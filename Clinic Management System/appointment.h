#pragma once
#include <iostream>
using namespace std;
class Appointment {
private:
	string doctorName, patientName;
	string date;
public:
	Appointment();
	void display();
};