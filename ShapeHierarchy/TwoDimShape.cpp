#include "TwoDimShape.h"

TwoDimShape::TwoDimShape(int firstLane, int position, int size, string shape, char symbol) : Shape(firstLane)
{
	this->position = position;
	this->size = size;
	this->shape = shape;
	this->symbol = symbol;
}

void TwoDimShape::print()
{
	cout << "In 2D print" << endl;
}

double TwoDimShape::getArea()
{
	cout << "In 2D getArea" << endl;
	return 0.0;
}

void TwoDimShape::setPosition(int position)
{
	this->position = position;
}

int TwoDimShape::getPosition()
{
	return this->position;
}

void TwoDimShape::setSize(int size)
{
	this->size = size;
}

int TwoDimShape::getSize()
{
	return this->size;
}

void TwoDimShape::setShape(string shape)
{
	this->shape = shape;
}

string TwoDimShape::getShape()
{
	return this->shape;
}

void TwoDimShape::setSymbol(char symbol)
{
	this->symbol = symbol;
}

char TwoDimShape::getSymbol()
{
	return this->symbol;
}


