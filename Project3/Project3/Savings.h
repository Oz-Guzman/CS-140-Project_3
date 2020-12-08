#pragma once

#include "Account.h"

class Savings {
public:
	double getInterestRate();
	void setInterestRate(double interestRate);
	
private:
	double interestRate;


};