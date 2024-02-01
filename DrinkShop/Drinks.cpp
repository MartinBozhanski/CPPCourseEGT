#include "Drinks.h"

Drinks::Drinks(string name, double price, double quantity, string type)
{
	setName(name);
	setPrice(price);
	setQuantity(quantity);
	this->type = type;
}

void Drinks::setName(string name)
{
	this->name = name;
}

void Drinks::setPrice(double price)
{
	this->price = price;
}

void Drinks::setQuantity(double quantity)
{
	this->quantity = quantity;
}

string Drinks::getName()
{
	return this->name;
}

double Drinks::getPrice()
{
	return this->price;
}

double Drinks::getQuantity()
{
	return this->quantity;
}

string Drinks::getType()
{
	return this->type;
}

void Drinks::print()
{
	cout << "Drink: " << this->name << " " << "Price: " << this->price << " " << "Quantity: " << this->quantity << " " << "Type: " << this->type << endl;
}
