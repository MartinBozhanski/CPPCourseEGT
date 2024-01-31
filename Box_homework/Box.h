#ifndef Box_H
#define Box_H

class Box {
public:
	Box(double, double, double);
	void setWidth(double);
	void setLength(double);
	void setHeight(double);
	double getWidth();
	double getLength();
	double getHeight();
	void print();
private:
	double width;
	double length;
	double height;
};

#endif // !Box_H

