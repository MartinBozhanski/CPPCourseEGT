#pragma once
#include "Rectangle.h"


Rectangle::Rectangle(string color, string type, int l, int w) : Shape(color)
{
	this->type = type;
	this->l = l;
	this->w = w;
}

void Rectangle::draw()
{
	cout << "Color: " << this->color << " Type: " << this->type << endl;
}

void Rectangle::area()
{
	cout << "Rectangle area: " << this->l * this->w << endl;
}
