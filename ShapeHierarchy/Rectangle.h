#ifndef Rectangle_H
#define Rectangle_H

#include"TwoDimShape.h"
#include "Shape.h"

class Rectangle :public TwoDimShape {
public:
	Rectangle(int, int, int, int, string, char);
	virtual void print();
	virtual double getArea();
	void setB(int);
	int getB();
private:
	int b;
};

#endif // Rectangle_H
