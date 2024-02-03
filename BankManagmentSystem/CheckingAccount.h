#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include <iostream>
#include "Account.h"

using namespace std;

class CheckingAccount : public Account {
public:
	CheckingAccount(double, double);
	//double calculateInterest();
	virtual void credit(double);
	virtual void debit(double);
private:
	double dataMember;
};

#endif // !CHECKINGACCOUNT_H
