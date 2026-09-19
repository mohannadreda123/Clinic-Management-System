#pragma once
#include <iostream>
#include <string>
#include "niceView.h"
using namespace std;
class Person {
protected:
	string name;
	int id;
public:
	Person(int id);
	virtual void display();
	string getName();
	int getID();
};