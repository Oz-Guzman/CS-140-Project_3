#pragma once
#include "Account.h"


class PremiumChecking {
public:
	void withdraw();
	
private:
	unsigned long long monthlyFee;
};