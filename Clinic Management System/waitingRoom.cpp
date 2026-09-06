#include "waitingRoom.h"

void WaitingRoom::add_To_Waiting_Room(Appointment appointment) {
	appointments.push(appointment);
}
bool WaitingRoom::view_Who_Is_Waiting() {
	if (!appointments.isEmpty()) {
		appointments.display();
		return true;
	}
	return false;
}
bool WaitingRoom::call_Next_Patient() {
	if (!appointments.isEmpty()) {
		cout << ">>> NOW CALLING: \n";
		appointments.top().display();
		appointments.pop();
		return true;
	}
	return false;
}