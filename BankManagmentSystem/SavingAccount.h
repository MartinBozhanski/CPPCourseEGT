#ifndef INHERITANCETEST_SAVINGACCOUNT_H
#define INHERITANCETEST_SAVINGACCOUNT_H

#include <iostream>
#include "Account.h"

using namespace std;

class SavingAccount : public Account {
public:
	SavingAccount(double, double);
	double calculateInterest();
	virtual void credit(double);
	virtual void debit(double);
private:
	double interestRate;
};

#endif // !INHERITANCETEST_SAVINGACCOUNT_H

