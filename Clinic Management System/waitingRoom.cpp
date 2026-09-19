#include "waitingRoom.h"

bool WaitingRoom::add_To_Waiting_Room(Appointment* appointment) 
{ return waiting.push(appointment); }
bool WaitingRoom::view_Who_Is_Waiting() {
	if (waiting.isEmpty()) { return false; }
	cout << "#  \t\t\tPATIENT \t\tCASE\n";
	cout << "-  \t\t\t------- \t\t----\n";
	waiting.display();
	return true;
}
Appointment* WaitingRoom::call_Next_Patient() {
	Appointment* app = waiting.top();
	waiting.pop();
	return app;
}
bool WaitingRoom::isEmpty() { return waiting.isEmpty(); }
int WaitingRoom::remain() { return waiting.Size(); }