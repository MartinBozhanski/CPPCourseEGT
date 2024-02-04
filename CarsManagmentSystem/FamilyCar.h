#ifndef FamilyCar_H
#define FamilyCar_H
#include <iostream>
#include "Car.h"

using namespace std;

class FamilyCar : public Car{
public:
	FamilyCar(string, string, string, string, int, int, int, int, int);
	virtual void printPrice();
private:
	int usageFeePerDay;
	int distance;
};

#endif // !FamilyCar_H

