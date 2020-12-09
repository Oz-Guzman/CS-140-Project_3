#pragma once

#include "Account.h"
#include <string>

class Checking : public Account {
public:
	Checking();
	Checking(std::string firstName, std::string lastName);
	virtual void display() const override;
	void withdraw(unsigned long long amount);

private:
	unsigned long long overdraw = 0;
};