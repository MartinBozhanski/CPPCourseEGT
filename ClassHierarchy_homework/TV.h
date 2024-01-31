#ifndef TV_H
#define TV_H

#include <iostream>
#include <string>

using namespace std;

class TV {
public:
	TV(string);
	void setTelevision(string);
	string getTelevision();
	virtual void printTVFunctions();
private:
	string television;
};

#endif // !TV_H

