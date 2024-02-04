#include "FamilyCar.h"

FamilyCar::FamilyCar(string brand, string model, string kind, string colour, int chassisNumber, int carNumber, int fuelConsuption,
	int usageFeePerDay, int distance) : Car(brand, model,kind ,colour ,chassisNumber ,carNumber ,fuelConsuption)
{
	this->usageFeePerDay = usageFeePerDay;
	this->distance = distance;
}

void FamilyCar::printPrice()
{
	double finalPrice = 0;
	double x = 0;

	if (this->distance < 500)
	{
		x = 0.7;
		finalPrice = this->usageFeePerDay * x;
		cout << "Price: " << finalPrice << endl;
	}
	else {
		x = 0.4;
		finalPrice = this->usageFeePerDay * x;
		cout << "price: " << finalPrice << endl;
	}
}
