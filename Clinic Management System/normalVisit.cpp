#include "normalVisit.h"

NormalVisit::NormalVisit(string date, string docName, string illness, double fee)
	: Visit(date, docName, illness), fee(fee) {}

double NormalVisit::calculateFee() { return fee; }