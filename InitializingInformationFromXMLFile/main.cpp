#include <iostream>
#include "pugixml.h"

using namespace std;
using namespace pugi;

int main()
{
    xml_document doc;

    if (!doc.load_file("emplyees.xml")) {
        return -1;
    };
    xml_node empls = doc.child("EmployeesData").child("Employees");

    for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it) {
        cout << "Employee: ";
        for (xml_attribute_iterator ait = it->attributes_begin();
            ait != it->attributes_end(); ++ait)
        {
            cout << " " << ait->name() << "=" << ait->value();
        }
        cout << endl;
    }

    return 0;
}