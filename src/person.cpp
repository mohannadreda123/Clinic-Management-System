#include "person.h"

Person::Person(int id)
	: id(id) {}

void Person::display() {
	cout << id;
	NiceView::spaces(id);
	cout << name;
	NiceView::spaces(name);
}

string Person::getName() { return name; }

int Person::getID() { return id; }