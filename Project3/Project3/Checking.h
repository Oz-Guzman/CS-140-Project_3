#pragma once

#include "Account.h"

class Checking : protected Account {
public:
	Checking();
	unsigned long long withdraw(unsigned long long amount);
	virtual void display();
private:

};