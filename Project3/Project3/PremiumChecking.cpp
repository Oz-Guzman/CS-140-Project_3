#include <iostream>

#include "PremiumChecking.h"

PremiumChecking::PremiumChecking() {

}

PremiumChecking::PremiumChecking(std::string firstName, std::string lastName) {
	this->firstName = firstName;
	this->lastName = lastName;
}

void withdraw(unsigned long long amount) {

}

void PremiumChecking::setMonthlyFee(unsigned long long fee) {
	this->monthlyFee = fee;
}
unsigned long long PremiumChecking::getMonthlyFee() {
	return(this->monthlyFee);
}

void PremiumChecking::chargeMonthlyFee() {
	this->balance -= this->monthlyFee;
}

void PremiumChecking::display() const {
	Account::display();
	std::cout << "Monthly Fee: " << this->monthlyFee << std::endl;
}