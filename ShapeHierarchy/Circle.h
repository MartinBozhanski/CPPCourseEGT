#ifndef Circle_H
#define Circle_H

#include"TwoDimShape.h"

class Circle :public TwoDimShape {
public:
	Circle(int, int, int, string, char);
	virtual void print();
	virtual double getArea();
};

#endif // Circle_H

