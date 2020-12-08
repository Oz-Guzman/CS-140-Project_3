#pragma once

#include <string>

class Savings {
public:
	double getInterestRate();
	void setInterestRate(double interestRate);
	void firstNameSet();
	void lastNameSet();
	void display();
private:
	double interestRate;


};