#ifndef Library_H
#define Library_H
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

using namespace std;

class Library {
public:
	Library();
	void addBook(Book);
	void printBook();
	void findBook(string);
private:
	vector<Book> bookArray;
};

#endif // !Library_H

