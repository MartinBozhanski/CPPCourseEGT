#include "SavingAccount.h"
#include "Account.h"

SavingAccount::SavingAccount(double balance, double interestRate) : Account(balance)
{
	this->interestRate = interestRate;
}

double SavingAccount::calculateInterest()
{
	return this->getBalance() + (this->getBalance() * (this->interestRate / 100));
}

void SavingAccount::credit(double credit)
{
	Account::credit(credit);
}

void SavingAccount::debit(double debit)
{
	Account::debit(debit);
}


