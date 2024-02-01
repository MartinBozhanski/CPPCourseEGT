#ifndef Kind_H
#define Kind_H
#include <iostream>
#include <string>

using namespace std;

class Kind {
public:
	Kind(string);
	string getKind();
private:
	string kind;
};

#endif // !Kind_H

