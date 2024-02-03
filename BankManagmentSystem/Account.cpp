#include "Account.h"

Account::Account(double balance)
{
	setBalance(balance);
}

void Account::credit(double credit)
{
	this->balance += credit;
}

void Account::debit(double debit)
{
	if (this->balance < debit)
	{
		cout << "Debit amount exceeded account balance." << endl;
	}
	else {
		this->balance -= debit;
	}
}

void Account::setBalance(double balance)
{
	if (balance >= 0)
	{
		this->balance = balance;
	}
	else {
		this->balance = 0;
		cout << "The initial balance was invalid!" << endl;
	}
}

double Account::getBalance()
{
	return this->balance;
}
