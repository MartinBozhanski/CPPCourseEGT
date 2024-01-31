#include "Square.h"
#include "TwoDimShape.h"
#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(int a, int position, int size, string shape, char symbol) : TwoDimShape(a, position, size, shape, symbol)
{

}

void Circle::print()
{
	cout << "Circle" << endl;
}

double Circle::getArea()
{
	return 3.14 * this->getFirstLane();
}