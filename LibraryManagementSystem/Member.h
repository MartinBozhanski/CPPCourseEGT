#ifndef Member_H
#define Member_H
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class Member {
public:
	Member(string, int, string);
	void setName(string);
	void setAge(int);
	void setMemberID(string);
	string getName();
	int getAge();
	string getMemberID();
	void display();
	void borrowBook(Book* book);
private:
	string name;
	int age;
	string memberID;
};

#endif // !Member_H

