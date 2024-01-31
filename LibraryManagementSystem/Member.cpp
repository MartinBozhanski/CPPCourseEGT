#include "Member.h"


Member::Member(string name, int age, string memberID)
{
	setName(name);
	setAge(age);
	setMemberID(memberID);
}

void Member::setName(string name)
{
	this->name = name;
}

void Member::setAge(int age)
{
	this->age = age;

}

void Member::setMemberID(string memberID)
{
	this->memberID = memberID;
}

string Member::getName()
{
	return this->name;
}

int Member::getAge()
{
	return this->age;
}

string Member::getMemberID()
{
	return this->memberID;
}

void Member::display()
{
	cout << "Name: " << getName() << "Age: " << getAge() << "MemberID: " << getMemberID();
}

void Member::borrowBook(Book* book)
{
	cout << "Member: " << getName() << " borrowed book: " << book->getTitle() << endl;
}
