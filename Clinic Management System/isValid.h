#pragma once
#include <iostream>
#include <string>
using namespace std;

class IsValid {
public:
	static bool isValidId(string& id);
	static bool isValidPhone(string& phone);
	static bool isValidAge(string& age);
	static bool isValidFee(string& fee);
};