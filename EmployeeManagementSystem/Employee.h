#ifndef Employee_H
#define Employee_H
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	Employee(string, string, string);
	void setName(string);
	void setEmployeeID(string);
	void setPosition(string);
	string getName();
	string getEmployeeID();
	string getPosition();
	void display();
private:
	string name;
	string employeeID;
	string position;
};

#endif // !Employee_H

