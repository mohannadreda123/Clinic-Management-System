#pragma once
#include <iostream>
#include "person.h"
using namespace std;
class Patient : public Person {
private:
	int age;
public:
	Patient();
	void view() override;
};