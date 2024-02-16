#include "Book.h"

Book::Book(string title, string author, int pages)
{
	this->title = title;
	this->author = author;
	this->pages = pages;
}

void Book::display()
{
	cout << "Title: " << this->title << " Author: " << this->author << " Pages: " << this->pages << endl;
}
