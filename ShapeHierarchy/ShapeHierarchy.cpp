#include <iostream>
#include <vector>
#include "Shape.h"
#include "TwoDimShape.h"
#include "ThreeDimShape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main()
{
    //Shape* sPtr1 = new Square(30, 2, 3, "square", 's');
    Shape* sPtr3 = new Rectangle(30, 5, 2, 3, "rectangle", 's');
    //Shape* sPtr4 = new Triangle(30, 2, 3, "triangle", 's');
    //Shape* sPtr5 = new Circle(30, 2, 3, "circle", 's');
    //Shape* sPtr6 = new Circle(30, 2, 3, "circle", 's');
    Shape* sPtr6 = new Rectangle(32, 6, 8, 5, "rectangle", 's');

    Shape* sPtr2 = new ThreeDimShape(15, 20);

    vector <Shape*> myShapes;
    //myShapes.push_back(sPtr1);
    //myShapes.push_back(sPtr3);
    //myShapes.push_back(sPtr4);
    //myShapes.push_back(sPtr5);
    myShapes.push_back(sPtr6);

    /*for (int i = 0; i < myShapes.size(); i++)
    {
        myShapes.at(i)->print();
        myShapes.at(i)->getArea();
    }
    */

    bool isBigger = false;

    if (sPtr3->getArea() < sPtr6->getArea())
    {
        isBigger = true;
        cout << "true" << endl;
    }
    else if (sPtr3->getArea() > sPtr6->getArea())
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "equal" << endl;
    }

    return 0;
}