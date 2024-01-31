#include <iostream>
#include "TV.h"
#include "SmartTV.h"
#include <vector>

using namespace std;

int main()
{
	TV* tv = new TV("television");
	SmartTV* smartTV = new SmartTV("television", "youTube", "wiFi", "google", "netflix");

	//tv->printTVFunctions();
	//smartTV->printTVFunctions();

	vector <TV*> TVarr;
	TVarr.push_back(tv);
	TVarr.push_back(smartTV);

	for (int i = 0; i < TVarr.size(); i++)
	{
		TVarr.at(i)->printTVFunctions();
	}
}