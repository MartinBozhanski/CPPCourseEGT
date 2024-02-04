#ifndef Car_H
#define Car_H
#include <iostream>

using namespace std;

class Car {
public:
	Car(string, string, string, string, int, int, int);
	virtual void printPrice();
private:
	string brand;
	string model;
	string kind;
	string colour;
	int chassisNumber;
	int carNumber;
	int fuelConsuption;
};

#endif // !Car_H
