#include "ThreeDimShape.h"
#include <iostream>

ThreeDimShape::ThreeDimShape(int firstLane, int h) : Shape(firstLane)
{
	this->h = h;
}

void ThreeDimShape::print()
{
	cout << " We are in 30 print" << this->h << endl;
}

double ThreeDimShape::getArea()
{
	cout << "30 shape area" << this->h << endl;
	return 0.0;
}

double ThreeDimShape::getVolume()
{
	cout << "30 shape volume" << this->h << endl;
	return 0.0;
}
