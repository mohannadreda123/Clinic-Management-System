#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "isValid.h"
#include "niceView.h"
#include "visitHistory.h"
using namespace std;
class Patient : public Person {
private:
	string phone;
	int age;
	static int ID;
	History history;
public:
	Patient();
	void display() override;
    int getAge();
	string getPhone();
	void addVisitToHistory(Visit* visit);
	void viewHistory();
};