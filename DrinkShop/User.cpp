#include "User.h"

User::User(string userName, vector<Orders> ordersArray)
{
	setUserName(userName);
	setOrdersArray(ordersArray);
}

void User::setUserName(string)
{
	this->userName = userName;
}

void User::setOrdersArray(vector<Orders> ordersArray)
{
	this->ordersArray = ordersArray;
}

string User::getUserName()
{
	return this->userName;
}

vector<Orders> User::getOrdersArray()
{
	return this->ordersArray = ordersArray;
}
