#ifndef INHERITANCETEST_ALCOHOLIC_H
#define INHERITANCETEST_ALCOHOLIC_H

#include <iostream>
#include <string>
#include "Drinks.h"

using namespace std;

class Alcoholic : public Drinks {
public:
	Alcoholic(string, double, double, string, double, double);
	void setVolume(double);
	void setTax(double);
	double getVolume();
	double getTax();
	virtual void print();
	void calculatePrice();
private:
	double volume;
	double tax;
};

#endif // !INHERITANCETEST_ALCOHOLIC_H

