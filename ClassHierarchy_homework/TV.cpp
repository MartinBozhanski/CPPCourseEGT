#include "TV.h"

TV::TV(string television)
{
	setTelevision(television);
}

void TV::setTelevision(string television)
{
	this->television = television;
}

string TV::getTelevision()
{
	return this->television;
}

void TV::printTVFunctions()
{
	cout << "TV functions: " << getTelevision() << endl;
}