#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <vector>

void printArea(vector<Shape*> shapes) {
    for (int i = 0; i < shapes.size(); i++)
    {
        shapes.at(i)->area();
    }
}

int main()
{
    Circle *circle = new Circle(10);
    Rectangle *rectangle = new Rectangle(5, 5);

    vector<Shape*> shapes;
    shapes.push_back(circle);
    shapes.push_back(rectangle);

    printArea(shapes);
}

