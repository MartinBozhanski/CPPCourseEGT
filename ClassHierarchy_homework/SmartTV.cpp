#include "SmartTV.h"

SmartTV::SmartTV(string television, string youTube, string wiFi, string google, string netflix) : TV(television)
{
	this->youTube = youTube;
	this->wiFi = wiFi;
	this->google = google;
	this->netflix = netflix;
}

string SmartTV::getYouTube()
{
	return this->youTube;
}

string SmartTV::getWiFi()
{
	return this->wiFi;
}

string SmartTV::getGoogle()
{
	return this->google;
}

string SmartTV::getNetflix()
{
	return this->netflix;
}

void SmartTV::printTVFunctions()
{
	cout << "TV functions: " << getTelevision() << ", " << getYouTube() << ", " << getWiFi() << ", " << getGoogle()
		<< ", " << getNetflix() << endl;
}