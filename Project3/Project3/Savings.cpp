#include <iostream>

#include "Savings.h"


Savings::Savings()
{
	accountNumber = accountTally++;
}

Savings::Savings(std::string firstName, std::string lastName, double newInterestRate)
{
	Account::firstName = firstName;
	Account::lastName = lastName;
	Savings::interestRate = newInterestRate;
	accountNumber = accountTally++;
}

double Savings::getInterestRate()
{
	return Savings::interestRate;
}

void Savings::setInterestRate(double newInterestRate)
{
	Savings::interestRate = newInterestRate;
}

void Savings::display() const
{
	Account::display();
	std::cout << Savings::getInterestRate << std::endl;
}
