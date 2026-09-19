#include "sortingAlgorithm.h"

int Sort::selectionByAge(vector<Patient>& patient) {
	int comparisons = 0;
	int size = patient.size();
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			comparisons++;
			if (patient.at(j).getAge() < patient.at(minIndex).getAge())
				minIndex = j;
		}
		swap(patient.at(i), patient.at(minIndex));
	}
	return comparisons;
}

int Sort::selectionByName(vector<Patient>& patient) {
	int comparisons = 0;
	int size = patient.size();
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			comparisons++;
			if (patient.at(j).getName() < patient.at(minIndex).getName())
				minIndex = j;
		}
		swap(patient.at(i), patient.at(minIndex));
	}
	return comparisons;
}

int Sort::selectionByID(vector<Patient>& patient) {
	int comparisons = 0;
	int size = patient.size();
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			comparisons++;
			if (patient.at(j).getID() < patient.at(minIndex).getID())
				minIndex = j;
		}
		swap(patient.at(i), patient.at(minIndex));
	}
	return comparisons;
}

int Sort::selectionByID(vector<Doctor>& doctor) {
	int comparisons = 0;
	int size = doctor.size();
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			comparisons++;
			if (doctor.at(j).getID() < doctor.at(minIndex).getID())
				minIndex = j;
		}
		swap(doctor.at(i), doctor.at(minIndex));
	}
	return comparisons;
}