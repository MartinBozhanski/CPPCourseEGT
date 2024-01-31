#ifndef Triangle_H
#define Triangle_H

#include"TwoDimShape.h"

class Triangle :public TwoDimShape {
public:
	Triangle(int, int, int, string, char);
	virtual void print();
	virtual double getArea();
};

#endif // Triangle_H
