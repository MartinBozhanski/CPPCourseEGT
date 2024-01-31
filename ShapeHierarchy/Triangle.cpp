#include "Square.h"
#include "TwoDimShape.h"
#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(int a, int position, int size, string shape, char symbol) : TwoDimShape(a, position, size, shape, symbol)
{

}

void Triangle::print()
{
	cout << "Triangle" << endl;
}

double Triangle::getArea()
{
	cout << "Triangle area" << endl;
	return 0.0;
}
