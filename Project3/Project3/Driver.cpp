#include <string>
#include <iostream>
#include <vector>
#include <random>

#include "Checking.h"

int intRandomNumberGenerator(int start, int end) {
	std::random_device randNum;
	std::uniform_int_distribution<int> dist(start, end);
	return dist(randNum);
}
unsigned long long longRandomNumberGenerator(unsigned long long start, unsigned long long end) {
	std::random_device randNum;
	std::uniform_int_distribution<unsigned long long> dist(start, end);
	return dist(randNum);
}

int main() {
	int userInput;

	std::vector<std::string> firstNames;
	firstNames.push_back("Luke");
	firstNames.push_back("Juliet");
	firstNames.push_back("George");
	firstNames.push_back("Bob");
	firstNames.push_back("Isabelle");
	firstNames.push_back("Frank");
	firstNames.push_back("Alice");
	firstNames.push_back("Donald");

	std::vector<std::string> lastNames;
	lastNames.push_back("Wu");
	lastNames.push_back("Goldsworthy");
	lastNames.push_back("Philbrick");
	lastNames.push_back("Kagan");
	lastNames.push_back("Skywalker");
	lastNames.push_back("Meacham");
	lastNames.push_back("Fagles");
	lastNames.push_back("Trump");

	std::vector<Account*> vectorOfAccounts;


	
	std::cout << "Menu:\n1. Create Checking accounts\n2. Create Premium accounts\n3. Create Savings accounts\n4. Display all accounts\n5. Quit" << std::endl;
	std::cin >> userInput;

	if (userInput == 1) {
		
		int amountOfAccounts;
		
		std::cout << "How many acounts would you like to create?  ";
		std::cin.ignore();
		std::cin >> amountOfAccounts;
		
		while (amountOfAccounts > 0) {

			Account* checkingAcount = new Checking;

			checkingAcount->setFirstName(firstNames[intRandomNumberGenerator(0, firstNames.size()-1)]);
			
			checkingAcount->setLastName(lastNames[intRandomNumberGenerator(0, lastNames.size()-1)]);

			checkingAcount->deposit(longRandomNumberGenerator(0, 10000000));

			checkingAcount->display();

			vectorOfAccounts.push_back(checkingAcount);

			amountOfAccounts -= 1;
		}
	}

}

