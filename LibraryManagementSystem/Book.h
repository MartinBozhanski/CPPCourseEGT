#ifndef Book_H
#define Book_H
#include <iostream>
#include <string>

using namespace std;

class Book {
public:
	Book(string, string, string);
	void setTitle(string);
	void setAuthor(string);
	void setISBN(string);
	string getTitle();
	string getAuthor();
	string getISBN();
	void display();
private:
	string title;
	string author;
	string ISBN;
};

#endif // !Book_H

