#pragma once

#include <iostream>

using namespace std;

class Shape {
public:
	Shape(string color);
	virtual void draw();
protected:
	string color;
};
