#pragma
#include <iostream>

using namespace std;

class Book {
public:
	Book(string title, string author, int pages);
	void display();
private:
	string title;
	string author;
	int pages;

};