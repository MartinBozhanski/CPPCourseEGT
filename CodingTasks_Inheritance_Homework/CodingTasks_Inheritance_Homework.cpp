#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main()
{
    Circle circle("red", "circle");
    Rectangle rectangle("blue", "rectangle");

    circle.draw();
    rectangle.draw();
}