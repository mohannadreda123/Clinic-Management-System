#include "visit.h"

Visit::Visit(string& date, string& docName, string& illness) 
	: date(date), doctorName(docName), illness(illness) {}

void Visit::view() {
	cout << date << "\t   Dr. " << doctorName;
	cout << "\t   " << illness << "\t   " << calculateFee() << " EGP\n";
}