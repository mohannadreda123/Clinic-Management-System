#pragma once
#include <iostream>
#include <string>
#include "isValid.h"
#include "niceView.h"
#include "person.h"
using namespace std;
class Doctor : public Person {
private:
	static int ID;
	string specialization;
	string consultant_fee;
public:
	Doctor();
	void display() override;
	string getSpecialization();
	string getFee();
};