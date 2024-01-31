#ifndef Rectangle_H
#define Rectangle_H

struct Point
{
    double x;
    double y;
};

class Rectangle {
public:
    Rectangle(Point& cord1, Point& cord2, Point& cord3, Point& cord4)
    {
        x1 = cord1.x;
        y1 = cord1.y;
        x2 = cord2.x;
        y2 = cord2.y;
        x3 = cord3.x;
        y3 = cord3.y;
        x4 = cord4.x;
        y4 = cord4.y;
    }
    void length();
    void width();
    void perimeter();
    void area();

private:
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double rectLength;
    double rectWidth;
};

#endif Rectangle_H