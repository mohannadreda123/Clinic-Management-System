#include "isValid.h"

bool IsValid::isValidPhone(string& phone) {
	if (phone.length() != 11) return false;
	for (char ch : phone) if (!isdigit(ch)) return false;
	return true;
}

bool IsValid::isValidAge(string& age) {
	for (char ch : age) if (!isdigit(ch)) return false;
	return true;
}

bool IsValid::isValidId(string& id) {
	for (char ch : id) if (!(isdigit(ch))) return false;
	return true;
}

bool IsValid::isValidFee(string& fee) {
	for (char ch : fee) if (!isdigit(ch) && !(ch == '.')) return false;
	return true;
}