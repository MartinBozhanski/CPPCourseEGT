#ifndef ThreeDimShape_H
#define ThreeDimShape_H

#include "Shape.h"

class ThreeDimShape :public Shape {
public:
	ThreeDimShape(int, int);
	virtual void print();
	virtual double getArea();
	double getVolume();
private:
	int h;
};

#endif // !ThreeDimShape_H

