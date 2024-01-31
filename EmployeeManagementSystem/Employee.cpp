#include "Employee.h"

Employee::Employee(string name, string employeeID, string position)
{
	setName(name);
	setEmployeeID(employeeID);
	setPosition(position);
}

void Employee::setName(string name)
{
	this->name = name;
}

void Employee::setEmployeeID(string employeeID)
{
	this->employeeID = employeeID;
}

void Employee::setPosition(string position)
{
	this->position = position;
}

string Employee::getName()
{
	return this->name;
}

string Employee::getEmployeeID()
{
	return this->employeeID;
}

string Employee::getPosition()
{
	return this->position;
}

void Employee::display()
{
	cout << "Name: " << getName() << " EmployeeID: " << getEmployeeID() << " Position: " << getPosition() << endl;
}
