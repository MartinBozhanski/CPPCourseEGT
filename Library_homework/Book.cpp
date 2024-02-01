#include "Book.h"

Book::Book(string bookName, Author author, Kind kind, int year) : author(author), kind(kind) {
	setBookName(bookName);
	setYear(year);
}

void Book::setBookName(string bookName)
{
	this->bookName = bookName;
}

void Book::setAuthor(Author author)
{
	this->author = author;
}

void Book::setKind(Kind kind)
{
	this->kind = kind;
}

void Book::setYear(int year)
{
	this->year = year;
}

string Book::getBookName()
{
	return this->bookName;
}

Author Book::getAuthor()
{
	return this->author;
}

Kind Book::getKind()
{
	return this->kind;
}

int Book::getYear()
{
	return this->year;
}
