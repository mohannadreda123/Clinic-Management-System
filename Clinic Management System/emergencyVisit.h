#pragma once
#include <iostream>
#include "visit.h"
using namespace std;

class EmergencyVisit : public Visit {
private:
	double fee;
public:
	EmergencyVisit(string date, string docName, string illness, double fee);
	double calculateFee();
};