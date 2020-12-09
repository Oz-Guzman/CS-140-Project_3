#pragma once

#include "Account.h"
#include <string>

class Checking : public Account {
public:
	Checking();
	Checking(std::string firstName, std::string lastName);
	virtual void display() const override;
	unsigned long long withdraw();

private:
	unsigned long long overdraw = 0;
};