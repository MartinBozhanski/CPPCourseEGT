#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(int r);
	void area() override;
private:
	int r;
};
