#pragma once
#include <iostream>
#include "visit.h"
using namespace std;

struct Node {
	Visit* visit;
	Node* next;
	Node(Visit* v) : visit(v), next(nullptr) {}
	~Node() { delete visit; };
};

class History {
private:
	Node* head = nullptr;
	double totalFee(Node* node);
public:
	History();
	void addVisit(Visit* node);
	void viewVisits();
	double viewFees();
	~History();
};