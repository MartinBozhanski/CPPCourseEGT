#include "CheckingAccount.h"
#include "Account.h"

CheckingAccount::CheckingAccount(double balance, double dataMember) : Account(balance)
{
	this->dataMember = dataMember;
}

void CheckingAccount::credit(double credit)
{
	Account::credit(credit);
}

void CheckingAccount::debit(double debit)
{
	Account::debit(debit);
}

