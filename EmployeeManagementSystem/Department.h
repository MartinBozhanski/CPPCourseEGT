#ifndef Department_H
#define Department_H
#include <iostream>
#include <string>
#include "Employee.h"
#include <vector>

using namespace std;

class Department {
public:
	Department(string, vector<Employee*>, int);
	void setDepartmentName(string);
	void setEmployees(vector<Employee*>);
	void setNumEmployees(int);
	string getDepartmentName();
	vector<Employee*> getEmployees();
	int getNumEmployees();
	void addEmployee(Employee* employee);
	void displayEmployees();
private:
	string departmentName;
	vector<Employee *> employees;
	int numEmployees;
};

#endif // !Department_H

