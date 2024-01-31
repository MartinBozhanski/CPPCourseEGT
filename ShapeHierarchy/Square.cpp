#include "Square.h"
#include "TwoDimShape.h"
#include <iostream>

using namespace std;

Square::Square(int a, int position, int size, string shape, char symbol) : TwoDimShape(a, position, size, shape, symbol)
{

}

void Square::print()
{
	cout << "Square" << endl;
}

double Square::getArea()
{
	return this->getFirstLane() * this->getFirstLane();
}