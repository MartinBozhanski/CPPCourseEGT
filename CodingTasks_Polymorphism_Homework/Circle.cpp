#include "Circle.h"
#pragma once

Circle::Circle(string color, string type, int r) : Shape(color)
{
	this->type = type;
	this->r = r;
}

void Circle::draw()
{
	cout << "Color: " << this->color << " Type: " << this->type << endl;
}

void Circle::area()
{
	cout << "Circle area: " << this->r * this->r * 3.14 << endl;
}
