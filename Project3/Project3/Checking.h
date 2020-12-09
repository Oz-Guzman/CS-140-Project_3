#pragma once

#include "Account.h"
#include <string>

class Checking : public Account {
public:
	Checking();
	Checking(std::string firstName, std::string lastName);
	unsigned long long withdraw(unsigned long long amount);
	//virtual void display();
private:

};