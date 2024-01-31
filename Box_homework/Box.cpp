#include <iostream>
#include "Box.h"

using namespace std;

Box::Box(double width, double length, double height)
{
	setWidth(width);
	setLength(length);
	setHeight(height);
}

void Box::setWidth(double width)
{
	this->width = width;
}

void Box::setLength(double length)
{
	this->length = length;
}

void Box::setHeight(double height)
{
	this->height = height;
}

double Box::getWidth()
{
	return this->width;
}

double Box::getLength()
{
	return this->length;
}

double Box::getHeight()
{
	return this->height;
}

void Box::print()
{
	cout << "Width: " << getWidth() << " Length: " << getLength() << " Height: " << getHeight() << endl;
}
