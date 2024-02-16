#pragma once
#include "Shape.h"

class Circle : public Shape{
public:
	Circle(string color, string type);
	void draw() override;
private:
	string type;
};
