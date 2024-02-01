#ifndef Orders_H
#define Orders_H

#include <iostream>
#include <string>
#include <vector>
#include "Drinks.h"

using namespace std;

class Orders {
public:
	Orders(int, Drinks, double, double);
	void setNumber(int);
	void setData(double);
	void setFinalPrice(double);
	int getNumber();
	double getData();
	double getFinalPrice();
	Drinks getDrinks();
private:
	int number;
	Drinks drinks;
	double data;
	double finalPrice;
};

#endif // !Orders_H
