#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(int l, int w);
	void area() override;
private:
	int l;
	int w;
};

