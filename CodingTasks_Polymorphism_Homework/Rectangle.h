#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(string color, string type, int l, int w);
	void draw() override;
	void area() override;
private:
	string type;
	int l;
	int w;
};

