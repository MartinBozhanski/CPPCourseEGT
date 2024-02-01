#ifndef Drinks_H
#define Drinks_H

#include <iostream>
#include <string>

using namespace std;

class Drinks {
public:
	Drinks(string, double, double, string);
	void setName(string);
	void setPrice(double);
	void setQuantity(double);
	string getName();
	double getPrice();
	double getQuantity();
	string getType();
	virtual void print();
private:
	string name;
	double price;
	double quantity;
	string type;
};

#endif // !Drinks_H

