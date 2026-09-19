#pragma once
#include <iostream>
using namespace std;
class Visit {
private:
	string date, doctorName, illness;
public:
	Visit(string& date, string& docName, string& illness);
	virtual void view();
	virtual double calculateFee() = 0;
};