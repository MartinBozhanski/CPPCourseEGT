#ifndef INHERITANCETEST_NOALCOHOLIC_H
#define INHERITANCETEST_NOALCOHOLIC_H

#include <iostream>
#include <string>
#include "Drinks.h"

using namespace std;

class NoAlcoholic : public Drinks {
public:
	NoAlcoholic(string, double, double, string, double, double);
	void setLiters(double);
	void setCityTax(double);
	double getLiters();
	double getCityTax();
	virtual void print();
	void calculatePrice();
private:
	double liters;
	double cityTax;
};

#endif // !INHERITANCETEST_NOALCOHOLIC_H

