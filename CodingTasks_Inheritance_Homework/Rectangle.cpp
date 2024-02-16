#include "Rectangle.h"
#pragma once

Rectangle::Rectangle(string color, string type) : Shape(color)
{
	this->type = type;
}

void Rectangle::draw()
{
	cout << "Color: " << this->color << " Type: " << this->type << endl;
}
