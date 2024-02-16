#include "Circle.h"
#pragma once

Circle::Circle(string color, string type) : Shape(color)
{
	this->type = type;
}

void Circle::draw()
{
	cout << "Color: " << this->color << " Type: " << this->type << endl;
}
