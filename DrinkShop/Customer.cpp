#include "Customer.h"

Customer::Customer(string userName, vector<Orders> ordersArray)
{
	setUserName(userName);
	setOrdersArray(ordersArray);
}

void Customer::setUserName(string userName)
{
	this->userName = userName;
}

void Customer::setOrdersArray(vector<Orders> ordersArray)
{
	this->ordersArray = ordersArray;
}

string Customer::getUserName()
{
	return this->userName;
}

vector<Orders> Customer::getOrdersArray()
{
	return this->ordersArray = ordersArray;
}
