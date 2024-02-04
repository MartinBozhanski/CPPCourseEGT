#include <iostream>
#include <vector>
#include "Car.h"
#include "FamilyCar.h"
#include "LuxuryCar.h"
#include <string>

int main()
{
    FamilyCar* firstFamilyCar = new FamilyCar("Citroen", "C4", "Van", "Blue", 123, 3245, 6, 10, 120);
    LuxuryCar* firstLuxuryCar = new LuxuryCar("Audi", "R8", "Coupe", "Red", 234, 7777, 12, 15, 210, 100);

    vector<Car*> carsArray;
    carsArray.push_back(firstFamilyCar);
    carsArray.push_back(firstLuxuryCar);

    for (int i = 0; i < carsArray.size(); i++)
    {
        FamilyCar* ptr = dynamic_cast<FamilyCar*>(carsArray.at(i));
        if (ptr != 0)
        {
            cout << "Family car ";
            carsArray.at(i)->printPrice();
        }
        else
        {
            cout << "Luxury car ";
            carsArray.at(i)->printPrice();
        }
    }

}
