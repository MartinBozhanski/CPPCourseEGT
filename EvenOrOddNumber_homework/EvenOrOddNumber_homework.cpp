#include <iostream>

using namespace std;

void EvenOrOdd(int number) {
    if (number % 2 == 0) {
        cout << "even" << endl;
    }
    else if (number % 2 != 0)
    {
        cout << "odd" << endl;
    }
}

int main()
{
    int countOfNumbers;
    cout << "Enter count of numbers: ";
    cin >> countOfNumbers;

    for (int i = 0; i < countOfNumbers; i++)
    {
        int integerNumber;
        cout << "Enter integer number: ";
        cin >> integerNumber;

        EvenOrOdd(integerNumber);
    }
}

