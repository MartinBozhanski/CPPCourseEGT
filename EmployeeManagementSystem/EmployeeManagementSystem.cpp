#include <iostream>
#include "Employee.h"
#include "Department.h"
#include <vector>

using namespace std;

int main()
{
	Employee* firstEmployee = new Employee("Iva", "1", "manager");
	Employee* secondEmployee = new Employee("Ivan", "2", "leader");
	Employee* thirdEmployee = new Employee("Ivailo", "3", "worker");

	vector<Employee*> employeeArr;

	Department* department = new Department("First", employeeArr, employeeArr.size());

	department->addEmployee(firstEmployee);
	department->addEmployee(secondEmployee);
	department->addEmployee(thirdEmployee);

	cout << "Employees in current Department are: " << endl;
	department->displayEmployees();
}