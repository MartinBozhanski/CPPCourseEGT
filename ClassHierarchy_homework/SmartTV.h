#ifndef SmartTV_H
#define SmartTV_H
#include <iostream>
#include "TV.h"

using namespace std;

class SmartTV : public TV {
public:
	SmartTV(string, string, string, string, string);
	string getYouTube();
	string getWiFi();
	string getGoogle();
	string getNetflix();
	void printTVFunctions();
private:
	string youTube;
	string wiFi;
	string google;
	string netflix;
};

#endif // !SmartTV_H
