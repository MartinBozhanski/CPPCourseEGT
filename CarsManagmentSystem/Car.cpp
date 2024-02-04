#include "Car.h"

Car::Car(string brand, string model, string kind, string colour, int chassisNumber, int carNumber, int fuelConsuption)
{
	this->brand = brand;
	this->model = model;
	this->kind = kind;
	this->colour = colour;
	this->chassisNumber = chassisNumber;
	this->carNumber = carNumber;
	this->fuelConsuption = fuelConsuption;
}

void Car::printPrice()
{
}
