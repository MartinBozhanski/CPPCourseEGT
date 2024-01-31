#include "Square.h"
#include "TwoDimShape.h"
#include <iostream>
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

Rectangle::Rectangle(int a, int b, int position, int size, string shape, char symbol) : TwoDimShape(a, position, size, shape, symbol)
{
	setB(b);
}

void Rectangle::print()
{
	cout << "Rectangle" << endl;
}

double Rectangle::getArea()
{
	return this->getB() * Shape::getFirstLane();
}

void Rectangle::setB(int b)
{
	this->b = b;
}

int Rectangle::getB()
{
	return this->b;
}