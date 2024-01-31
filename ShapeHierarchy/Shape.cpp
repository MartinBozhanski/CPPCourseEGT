#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(int firstLane)
{
	setFirstLane(firstLane);
}

void Shape::setFirstLane(int firstLane)
{
	this->firstLane = firstLane;
}

int Shape::getFirstLane()
{
	return firstLane;
}

double Shape::getArea()
{
	cout << "This Shape is in area.";
	return 0;
}

void Shape::print()
{
	cout << "In shape the side is " << this->firstLane;
}