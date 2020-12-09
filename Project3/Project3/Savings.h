#pragma once

#include "Account.h"

class Savings : protected Account {
public:
	Savings();
	Savings(std::string firstName, std::string lastName, double newInterestRate);
	double getInterestRate();
	void setInterestRate(double interestRate);
	virtual void display() const;

private:
	double interestRate{ 0.0 };


};
