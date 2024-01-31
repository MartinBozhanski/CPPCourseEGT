#include "Book.h"

Book::Book(string title, string author, string ISBN)
{
	setTitle(title);
	setAuthor(author);
	setISBN(ISBN);
}

void Book::setTitle(string title)
{
	this->title = title;
}

void Book::setAuthor(string author)
{
	this->author = author;
}

void Book::setISBN(string ISBN)
{
	this->ISBN = ISBN;
}

string Book::getTitle()
{
	return this->title;
}

string Book::getAuthor()
{
	return this->author;
}

string Book::getISBN()
{
	return this->ISBN;
}

void Book::display()
{
	cout << "Title: " << getTitle() << "Author: " << getAuthor() << "ISBN: " << getISBN();
}
