#pragma once
#include "Account.h"


class PremiumChecking : protected Account {
public:
	void withdraw();
	
private:
	unsigned long long monthlyFee;
};