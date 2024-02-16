#include "Rectangle.h"
#pragma once

Rectangle::Rectangle(int l, int w) : Shape()
{
	this->l = l;
	this->w = w;
}

void Rectangle::area()
{
	cout << "Rectangle area: " << this->l * this->w << endl;
}
