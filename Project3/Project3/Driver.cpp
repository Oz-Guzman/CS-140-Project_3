#include <string>
#include <iostream>
#include <vector>

#include "Checking.h"


int main() {
	int userInput;

	std::vector<std::string> firstNames;
	firstNames.push_back("Juliet");
	firstNames.push_back("George");
	firstNames.push_back("Bob");
	firstNames.push_back("Isabelle");
	firstNames.push_back("Frank");
	firstNames.push_back("Alice");
	firstNames.push_back("Donald");

	std::vector<std::string> lastNames;

	
	std::cout << "Menu:\n1. Create Checking accounts\n2. Create Premium accounts\n3. Create Savings accounts\n4. Display all accounts\n5. Quit" << std::endl;
	std::cin >> userInput;

	if (userInput == 1) {

		// todo: this needs to be placed in the heap.
		int amountOfAccounts;
		Checking checkingAcount;
		std::string tempString;

		std::cout << "How many acounts would you like to create?  ";
		std::cin.ignore();
		std::cin >> amountOfAccounts;
		
		while (amountOfAccounts > 0) {
			std::cout << "First Name: ";
			std::cin.ignore();
			std::cin >> tempString;
			checkingAcount.setFirstName(tempString);
			std::cout << "\n";

			std::cout << "Last Name: ";
			std::cin.ignore();
			//tempString = "";
			std::cin >> tempString;
			checkingAcount.setLastName(tempString);



			amountOfAccounts -= 1;
		}
	}

}