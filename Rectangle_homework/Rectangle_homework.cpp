#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Point w{ 1.0, 1.0 };
    Point x{ 5.0, 1.0 };
    Point y{ 5.0, 3.0 };
    Point z{ 1.0, 3.0 };
    Point j{ 0.0, 0.0 };
    Point k{ 1.0, 0.0 };
    Point m{ 1.0, 1.0 };
    Point n{ 0.0, 1.0 };

    Rectangle r1{ w, y, x, z };
    std::cout << "Rectangle 1:\n";
    r1.length();
    cout << endl;
    r1.width();
    cout << endl;
    r1.perimeter();
    cout << endl;
    r1.area();

    return 0;
}