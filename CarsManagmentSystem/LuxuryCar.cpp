#include "LuxuryCar.h"

LuxuryCar::LuxuryCar(string brand, string model, string kind, string colour, int chassisNumber, int carNumber, int fuelConsuption,
	int usageFeePerDay, int distance, int extraFee) : Car(brand, model, kind, colour, chassisNumber, carNumber, fuelConsuption)
{
	this->usageFeePerDay = usageFeePerDay;
	this->distance = distance;
	this->extraFee = extraFee;
}

void LuxuryCar::printPrice()
{
	double finalPrice = 0;
	double x = 0;

	if (this->distance < 200)
	{
		x = 0.6;
		finalPrice = this->usageFeePerDay * x + this->extraFee;
		cout << "price: " << finalPrice << endl;
	}
	else {
		x = 0.4;
		finalPrice = this->usageFeePerDay * x + this->extraFee;
		cout << "Price: " << finalPrice << endl;
	}
}
