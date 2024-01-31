#include <iostream>
#include "Book.h"
#include "Member.h"
#include <vector>

using namespace std;

int main()
{
    Book* firstBook = new Book("White Wolf", "Jeck London", "100");
    Book* secondBook = new Book("Lion", "Timon", "200");

    Member* firstMember = new Member("Ivan", 25, "1234");
    Member* secondMember = new Member("Hristo", 33, "5678");

    vector<Book*> bookArr;
    bookArr.push_back(firstBook);
    bookArr.push_back(secondBook);

    vector<Member*> memberArr;
    memberArr.push_back(firstMember);
    memberArr.push_back(secondMember);

    for (int i = 0; i < bookArr.size(); i++)
    {
            memberArr[i]->borrowBook(bookArr[i]);
    }
}

