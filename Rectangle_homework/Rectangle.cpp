#include <iostream>
#include "Rectangle.h"

using namespace std;

void Rectangle::length() {
	rectLength = fabs(x1 - x2);
	cout << rectLength;
}

void Rectangle::width() {
	rectWidth = fabs(y1 - y2);
	cout << rectWidth;
}

void Rectangle::perimeter() {
	rectLength = fabs(x1 - x2);
	rectWidth = fabs(y1 - y2);
	double perimeter = (rectLength + rectWidth) * 2;
	cout << perimeter;
}

void Rectangle::area() {
	rectLength = fabs(x1 - x2);
	rectWidth = fabs(y1 - y2);
	double area = rectLength * rectWidth;
	cout << area;
}