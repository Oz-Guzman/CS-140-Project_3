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

void Checking::withdraw(unsigned long long amount) {
	
	if (Account::balance <= amount) {
		this->overdraw += 1;
		if (overdraw > 3) {
			Account::balance -= 30;
		}
		else {
			Account::balance -= 10;
		}

	}
	else {
		Account::balance -= amount;
	}
	

}
