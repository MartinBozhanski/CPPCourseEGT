#ifndef TwoDimShape_H
#define TwoDimShape_H

#include "Shape.h"

class TwoDimShape :public Shape {
public:
	TwoDimShape(int, int, int, string, char);
	virtual void print();
	virtual double getArea();
	void setPosition(int);
	int getPosition();
	void setSize(int);
	int getSize();
	void setShape(string);
	string getShape();
	void setSymbol(char);
	char getSymbol();
private:
	int position;
	int size;
	string shape;
	char symbol;
};

#endif // !TwoDimShape_H
