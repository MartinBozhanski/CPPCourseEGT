#include "Library.h"

Library::Library()
{
}

void Library::addBook(Book book)
{
	this->bookArray.push_back(book);

}

void Library::printBook()
{
	for (int i = 0; i < bookArray.size(); i++)
	{
		cout << bookArray.at(i).getBookName() << " " << bookArray.at(i).getAuthor().getFirstName() << " " << bookArray.at(i).getAuthor().getLastName() <<
			" " << bookArray.at(i).getAuthor().getNationality() << " " << bookArray.at(i).getKind().getKind() << " " << bookArray.at(i).getYear() << endl;
	}
}

void Library::findBook(string text)
{
	for (Book book : bookArray)
	{
		if (book.getBookName().find(text))
		{
			cout << "We found the book" << endl;
			break;
		}
		else {
			cout << "Not";
		}
	}
}




