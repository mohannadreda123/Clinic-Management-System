#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "appointment.h"
using namespace std;

struct App {
	Appointment* app;
	App* next;
	App(Appointment* app) : app(app) {}
};

class PriorityQueue {
private:
	App* head = nullptr;
public:
	PriorityQueue();
	~PriorityQueue();
	bool patientExist(Appointment* app);
	bool doctorExist(Appointment* app);
	bool dateExist(Appointment* app);
	bool push(Appointment* app);
	bool pop();
	bool isEmpty();
	int Size();
	void display();
	Appointment* top();
};