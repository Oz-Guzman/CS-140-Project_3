#pragma once

#include "Account.h"

class Savings : protected Account {
public:
	double getInterestRate();
	void setInterestRate(double interestRate);
	
private:
	double interestRate;


};