#include "NoAlcoholic.h"
#include "Drinks.h"
#include <iostream>
using namespace std;

NoAlcoholic::NoAlcoholic(string name, double price, double quantity, string type, double liters, double cityTax) : Drinks(name, price, quantity, type)
{
	setLiters(liters);
	setCityTax(cityTax);
}

void NoAlcoholic::setLiters(double liters)
{
	this->liters = liters;
}

void NoAlcoholic::setCityTax(double cityTax)
{
	this->cityTax = cityTax;
}

double NoAlcoholic::getLiters()
{
	return this->liters;
}

double NoAlcoholic::getCityTax()
{
	return this->cityTax;
}

void NoAlcoholic::print()
{
	Drinks::print();
}

void NoAlcoholic::calculatePrice()
{
	cout << "NoAlcoholic price: " << this->getQuantity() * this->getPrice() * this->getCityTax() << endl;
}
