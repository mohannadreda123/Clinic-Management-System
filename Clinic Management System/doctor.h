#pragma once
#include <iostream>
#include "person.h"
using namespace std;
class Doctor : public Person {
private:
	string specialization;
	double consultant_fee;
public:
	Doctor();
	void view() override;
};