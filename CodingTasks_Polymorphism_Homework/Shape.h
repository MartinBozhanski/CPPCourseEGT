#pragma once

#include <iostream>

using namespace std;

class Shape {
public:
	Shape(string color);
	virtual void draw();
	virtual void area();
	virtual ~Shape();
protected:
	string color;
};
