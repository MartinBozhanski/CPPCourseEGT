#ifndef Author_H
#define Author_H
#include <iostream>
#include <string>

using namespace std;

class Author {
public:
	Author(string, string, string);
	void setFirstName(string);
	void setLastName(string);
	void setNationality(string);
	string getFirstName();
	string getLastName();
	string getNationality();

private:
	string firstName;
	string lastName;
	string nationality;
};

#endif // !Author_H

