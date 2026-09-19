#include "visitHistory.h"

History::History() { head = nullptr; }

void History::addVisit(Visit* node) {
	Node* visit = new Node(node);
	if (head == nullptr) {
		head = visit;
		return;
	}
	Node* temp = head;
	while (temp->next != nullptr) { temp = temp->next; }
	temp->next = visit;
}

void History::viewVisits() {
	Node* temp = head;
	while (temp != nullptr) {
		temp->visit->view();
		temp = temp->next;
	}
}

double History::totalFee(Node* node) {
	if (node == nullptr) return 0;
	return node->visit->calculateFee() + totalFee(node->next);
}

double History::viewFees() { return totalFee(head); }

History::~History() {
	Node* temp = head;
	while (temp != nullptr) {
		Node* node = temp->next;
		delete temp;
		temp = node;
	}
}