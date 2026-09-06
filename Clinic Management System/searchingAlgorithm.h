#pragma once
#include <iostream>
#include <vector>
#include "patient.h"
#include "doctor.h"
#include "sortingAlgorithm.h"
using namespace std;
class Search {
public:
	static int binarySearch(vector<Patient>patient, int target, int& comparisons);

	static int binarySearch(vector<Doctor>doctor, int target, int& comparisons);
};