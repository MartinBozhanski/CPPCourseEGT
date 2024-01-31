#ifndef Square_H
#define Square_H

#include"TwoDimShape.h"

class Square :public TwoDimShape {
public:
	Square(int, int, int, string, char);
	virtual void print();
	virtual double getArea();
};

#endif // Square_H
