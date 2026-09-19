#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "patient.h"
#include "doctor.h"
using namespace std;
class Sort {
public:
	static int selectionByAge(vector<Patient>& patient);

	static int selectionByName(vector<Patient>& patient);

	static int selectionByID(vector<Patient>& patient);

	static int selectionByID(vector<Doctor>& doctor);
};