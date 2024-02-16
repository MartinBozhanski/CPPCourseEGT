#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(string color, string type, int r);
	void draw() override;
	void area() override;
private:
	string type;
	int r;
};
