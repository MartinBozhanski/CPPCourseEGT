#include <iostream>
#include "Library.h"
#include "Kind.h"
#include "Book.h"
#include "Author.h"

using namespace std;

int main()
{
    Library first;
    Author firstAuthor("Hristo", "Iliev", "Bulgarian");
    Kind firstKind("classic");
    Book firstBook("First", firstAuthor, firstKind, 2014);

    Author sAuthor("Hris", "Iliev", "French");
    Kind sKind("comedy");
    Book sBook("Second", sAuthor, sKind, 2004);

    first.addBook(firstBook);
    first.addBook(sBook);

    first.printBook();
}

