#include "Circle.h"
#pragma once

Circle::Circle(int r) : Shape()
{
	this->r = r;
}

void Circle::area()
{
	cout << "Circle area: " << this->r * this->r * 3.14 << endl;
}
