#ifndef Account_H
#define Account_H
#include <iostream>
#include <string>

using namespace std;

class Account {
public:
	Account(double);
	virtual void credit(double);
	virtual void debit(double);
	void setBalance(double);
	double getBalance();
private:
	double balance;
};

#endif // !Account_H

