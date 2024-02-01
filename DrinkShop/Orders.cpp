#include "Orders.h"

Orders::Orders(int number, Drinks drinks, double data, double finalPrice) : drinks(drinks)
{
	setNumber(number);
	setData(data);
	setFinalPrice(finalPrice);
}

void Orders::setNumber(int number)
{
	this->number = number;
}

void Orders::setData(double data)
{
	this->data = data;
}

void Orders::setFinalPrice(double finalPrice)
{
	this->finalPrice = finalPrice;
}

int Orders::getNumber()
{
	return this->number;
}

double Orders::getData()
{
	return this->data;
}

double Orders::getFinalPrice()
{
	return this->finalPrice;
}

Drinks Orders::getDrinks()
{
	return this->drinks;
}
