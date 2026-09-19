#include "emergencyVisit.h"

EmergencyVisit::EmergencyVisit(string date, string docName, string illness, double fee)
	: Visit(date, docName, illness), fee(fee) {
}

double EmergencyVisit::calculateFee() { return fee + 150; }