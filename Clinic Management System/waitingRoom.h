#pragma once
#include <iostream>
#include "appointment.h"
#include "dataStructures.h"
using namespace std;
class WaitingRoom {
private:
	priorityQueue appointments;
public:
	void add_To_Waiting_Room(Appointment appointment);
	bool view_Who_Is_Waiting();
	bool call_Next_Patient();
};