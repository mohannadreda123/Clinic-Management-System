#include "searchingAlgorithm.h"

int Search::binarySearch(vector<Patient>& patient, int target) {
	int first = 0;
	int last = patient.size() - 1;
	while (first <= last) {
		int mid = (first + last) / 2;
		if (target == patient.at(mid).getID()) return mid;
		else if (target > patient.at(mid).getID()) first = mid + 1;
		else last = mid - 1;
	}
	return -1;
}

int Search::binarySearch(vector<Doctor>& doctor, int target) {
	int first = 0;
	int last = doctor.size() - 1;
	while (first <= last) {
		int mid = (first + last) / 2;
		if (target == doctor.at(mid).getID()) return mid;
		else if (target > doctor.at(mid).getID()) first = mid + 1;
		else last = mid - 1;
	}
	return -1;
}