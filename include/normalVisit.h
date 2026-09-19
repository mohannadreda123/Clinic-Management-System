#pragma once
#include <iostream>
#include "visit.h"
using namespace std;

class NormalVisit : public Visit {
private:
	double fee;
public:
	NormalVisit(string date, string docName, string illness, double fee);
	double calculateFee();
};