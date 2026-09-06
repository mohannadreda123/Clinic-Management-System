#include "dataStructures.h"

// Priority Queue methods
void priorityQueue::push(Appointment appointment) {
	if (appointment.getPriority() == 1) {
		this->appointment.push_back(appointment);
	}
	else if (appointment.getPriority() == 2) {
		this->appointment.push_back(appointment);
		sort(this->appointment.begin(), this->appointment.end());
	}
}
bool priorityQueue::pop() {
	if (!isEmpty()) {
		appointment.erase(appointment.begin());
		return true;
	}
	return false;
}
bool priorityQueue::isEmpty() {
	if (appointment.size() == 0) return true;
	return false;
}
int priorityQueue::Size() {
	return appointment.size();
}
void priorityQueue::display() {
	for (int i = 0; i < Size(); i++) {
		appointment.at(i).display();
	}
}
Appointment priorityQueue::top() { return appointment.at(0); }