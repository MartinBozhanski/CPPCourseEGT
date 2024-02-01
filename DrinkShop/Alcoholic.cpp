#include "Alcoholic.h"
#include "Drinks.h"

Alcoholic::Alcoholic(string name, double price, double quantity, string type, double volume, double tax) : Drinks(name, price, quantity, type)
{
	setVolume(volume);
	setTax(tax);
}

void Alcoholic::setVolume(double volume)
{
	this->volume = volume;
}

void Alcoholic::setTax(double tax)
{
	this->tax = tax;
}

double Alcoholic::getVolume()
{
	return this->volume;
}

double Alcoholic::getTax()
{
	return this->tax;
}

void Alcoholic::print()
{
	Drinks::print();
}

void Alcoholic::calculatePrice()
{
	cout << "Alcoholic price: " << this->getQuantity() * this->getPrice() * this->getTax() << endl;
}
