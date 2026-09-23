#include "priorityQueue.h"

PriorityQueue::PriorityQueue() { head = nullptr; }

bool PriorityQueue::push(Appointment* app) {
	App* temp = head;
	while (temp != nullptr) {
		if (temp->app->getPatientId() == app->getPatientId() && temp->app->getDate() == app->getDate() && temp->app->getTime() == app->getTime()) {
			cout << "*{ This Patient already has an appointment on this date! }*\n\n";
			return true;
		}
		if (temp->app->getDoctorId() == app->getDoctorId() && temp->app->getDate() == app->getDate() && temp->app->getTime() == app->getTime()) {
			cout << "*{ This Date and Time is already taken for this Doctor! }*\n\n";
			return true;
		}
		temp = temp->next;
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
		delete temp->app;
		delete temp;
		temp = node;
	}
}