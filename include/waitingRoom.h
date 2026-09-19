#pragma once
#include <iostream>
#include <string>
#include "appointment.h"
#include "priorityQueue.h"
using namespace std;
class WaitingRoom {
private:
	PriorityQueue waiting;
public:
	bool add_To_Waiting_Room(Appointment* appointment);
	bool view_Who_Is_Waiting();
	Appointment* call_Next_Patient();
	bool isEmpty();
	int remain();
};