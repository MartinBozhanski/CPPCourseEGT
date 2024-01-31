#ifndef Shape_H
#define Shape_H

#include <iostream>
using namespace std;

class Shape {
public:
	Shape(int);

	void setFirstLane(int);
	int getFirstLane();

	virtual double getArea();
	virtual void print();
private:
	int firstLane;
};

#endif // Shape
