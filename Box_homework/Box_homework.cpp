#include <iostream>
#include "Box.h"

using namespace std;

Box newBox(Box& box1, Box& box2) {
    double box1Width = box1.getWidth();
    double box1Length = box1.getLength();
    double box1Height = box1.getHeight();

    double box2Width = box2.getWidth();
    double box2Length = box2.getLength();
    double box2Height = box2.getHeight();

    if (box1Width == box2Width && box1Length == box2Length)
    {
        return Box(box1Width, box1Length, box1Height + box2Height);
    }
    else
    {
        return Box(box1Width + box2Width, box1Length + box2Length, box1Height + box2Height);
    }
}


int main()
{
    Box box1 = Box(12, 10, 20);
    Box box2 = Box(5, 14, 30);

    Box box3 = newBox(box1, box2);

    box3.print();
}
