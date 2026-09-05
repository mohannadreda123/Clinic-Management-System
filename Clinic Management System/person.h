#pragma once
#include <iostream>
using namespace std;
class Person {
protected:
	string name, phone;
	int id;
public:
	Person();
	virtual void view();
	string getName();
	int getID();
};