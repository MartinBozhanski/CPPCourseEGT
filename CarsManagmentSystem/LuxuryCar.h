#ifndef LuxuryCar_H
#define LuxuryCar_H
#include <iostream>
#include "Car.h"

using namespace std;

class LuxuryCar : public Car {
public:
	LuxuryCar(string, string, string, string, int, int, int, int, int, int);
	virtual void printPrice();
private:
	int usageFeePerDay;
	int distance;
	int extraFee;
};

#endif // LuxuryCar_H