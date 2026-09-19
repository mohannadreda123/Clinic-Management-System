#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "patient.h"
#include "doctor.h"
#include "sortingAlgorithm.h"
using namespace std;
class Search {
public:
	static int binarySearch(vector<Patient>& patient, int target);

	static int binarySearch(vector<Doctor>& doctor, int target);
};