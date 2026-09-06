#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "appointment.h"
using namespace std;

class priorityQueue {
private:
	vector<Appointment>appointment;
public:
	void push(Appointment appointment);
	bool pop();
	bool isEmpty();
	int Size();
	void display();
	Appointment top();
};

class LinkedList {
private:

public:

};