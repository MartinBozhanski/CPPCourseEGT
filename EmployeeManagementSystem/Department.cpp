#include "Department.h"

Department::Department(string departmentName, vector<Employee*> employees, int numEmployees)
{
	setDepartmentName(departmentName);
	setEmployees(employees);
	setNumEmployees(numEmployees);
}

void Department::setDepartmentName(string departmentName)
{
	this->departmentName = departmentName;
}

void Department::setEmployees(vector<Employee*> employees)
{
	this->employees = employees;
}

void Department::setNumEmployees(int numEmployees)
{
	this->numEmployees = numEmployees;
}

string Department::getDepartmentName()
{
	return this->departmentName;
}

vector<Employee*> Department::getEmployees()
{
	return this->employees;
}

int Department::getNumEmployees()
{
	return this->numEmployees;
}

void Department::addEmployee(Employee* employee)
{
	employees.push_back(employee);
}

void Department::displayEmployees()
{
	for (int i = 0; i < employees.size(); i++)
	{
		cout << employees.at(i)->getName() << endl;
	}
}
