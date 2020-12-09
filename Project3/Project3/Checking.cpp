#include <iostream>

#include "Checking.h"

Checking::Checking() {
	
}

Checking::Checking(std::string firstName, std::string lastName) {
	Account::firstName = firstName;
	Account::lastName = lastName;
}

void Checking::display() const{
	
	Account::display();
	std::cout << "Overdrawn: " << this->overdraw << std::endl;
}

unsigned long long Checking::withdraw() {
	return(0);
}
