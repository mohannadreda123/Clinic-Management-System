#include "priorityQueue.h"

PriorityQueue::PriorityQueue() { head = nullptr; }

bool PriorityQueue::patientExist(Appointment* app) {
	App* temp = head;
	while (temp != nullptr) {
		if (app->getPatientId() == temp->app->getPatientId()) return true;
		temp = temp->next;
	}
	return false;
}

bool PriorityQueue::doctorExist(Appointment* app) {
	App* temp = head;
	while (temp != nullptr) {
		if (app->getDoctorId() == temp->app->getDoctorId()) return true;
		temp = temp->next;
	}
	return false;
}

bool PriorityQueue::dateExist(Appointment* app) {
	App* temp = head;
	while (temp != nullptr) {
		if (app->getDate() == temp->app->getDate()) return true;
		temp = temp->next;
	}
	return false;
}

bool PriorityQueue::push(Appointment* app) {
	if (patientExist(app) && doctorExist(app) && dateExist(app)) {
		cout << "*{ This Appointment Already Added! }*\n\n";
		return true;
	}
	if (doctorExist(app) && dateExist(app)) {
		cout << "*{ This Date is Already Taken! }*\n\n";
		return true;
	}
	App* newNode = new App(app);
	if (isEmpty()) {
		newNode->next = nullptr;
		head = newNode;
		return false;
	}
	if (app->getPriority() == "1") {
		App* temp = head;
		if (head->app->getPriority() == "2") {
			newNode->next = head;
			head = newNode;
			return false;
		}
		while (temp->next != nullptr && temp->next->app->getPriority() == "1") 
		{ temp = temp->next; }
		newNode->next = temp->next;
		temp->next = newNode;
	}
	else {
		App* temp = head;
		while (temp->next != nullptr) { temp = temp->next; }
		newNode->next = nullptr;
		temp->next = newNode;
	}
	return false;
}
bool PriorityQueue::pop() {
	if (isEmpty()) { return false; }
	App* temp = head;
	head = head->next;
	delete temp;
	return true;
}
bool PriorityQueue::isEmpty() { return head == nullptr; }
int PriorityQueue::Size() { 
	int size = 0;
	App* temp = head;
	while (temp != nullptr) {
		size++;
		temp = temp->next;
	}
	return size;
}
void PriorityQueue::display() {
	App* temp = head;
	int count = 1;
	while (temp != nullptr) {
		cout << count;
		NiceView::spaces(count);
		temp->app->display();
		temp = temp->next;
		count++;
	}
}
Appointment* PriorityQueue::top() { return head->app; }

PriorityQueue::~PriorityQueue() {
	App* temp = head;
	while (temp != nullptr) {
		App* node = temp->next;
		delete temp;
		temp = node;
	}
}