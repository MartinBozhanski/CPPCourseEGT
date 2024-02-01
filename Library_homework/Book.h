#ifndef Book_H
#define Book_H
#include <iostream>
#include <string>
#include "Author.h"
#include "Kind.h"

using namespace std;

class Book {
public:
	Book(string, Author, Kind, int);
	void setBookName(string);
	void setAuthor(Author);
	void setKind(Kind);
	void setYear(int);
	string getBookName();
	Author getAuthor();
	Kind getKind();
	int getYear();

private:
	string bookName;
	Author author;
	Kind kind;
	int year;
};

#endif // !Book_H

