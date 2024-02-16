#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(string color, string type);
	void draw() override;
private:
	string type;
};

