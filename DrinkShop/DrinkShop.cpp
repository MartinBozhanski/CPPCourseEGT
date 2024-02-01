#include <iostream>
#include <string>
#include <vector>
#include"Alcoholic.h"
#include "Drinks.h"
#include "NoAlcoholic.h"
#include "Orders.h"
#include "Customer.h"

using namespace std;



int main()
{
    Alcoholic* aPtr = new Alcoholic("Alcoholic", 20, 2, "wine", 3, 5);
    NoAlcoholic* naPtr = new NoAlcoholic("NoAlcoholic", 10, 1, "water", 2, 5);

    vector<Drinks*> myDrinks;
    myDrinks.push_back(aPtr);
    myDrinks.push_back(naPtr);

    for (int i = 0; i < myDrinks.size(); i++)
    {
        Alcoholic* ptr = dynamic_cast<Alcoholic*>(myDrinks.at(i));

        if (ptr != 0)
        {
            //cout << "Alcoholic" << endl;
            //cout << ptr->getPrice();
        }
        else {
            //cout << "NoAlcoholic" << endl;
        }
    }

    Drinks* drink1 = new Drinks("White", 15, 4, "wine");
    Orders* order1 = new Orders(2, *drink1, 12, 30);

    Drinks* drink2 = new Drinks("Dark", 14, 5, "wiskey");
    Orders* order2 = new Orders(5, *drink2, 10, 35);

    vector<Orders> ordersArray;
    ordersArray.push_back(*order1);
    ordersArray.push_back(*order2);

    //cout << ordersArray.at(0).getFinalPrice();

    Customer* use = new Customer("use", ordersArray);
    Customer* use2 = new Customer("use2", ordersArray);
    //cout << use1->getOrdersArray().at(0).getFinalPrice();

    vector<Customer*> userArr;
    userArr.push_back(use);
    userArr.push_back(use2);

    double finalPrice = 0;
    string name = "";

    for (int i = 0; i < userArr.size(); i++)
    {
        if (userArr.at(i)->getOrdersArray().at(i).getFinalPrice() > finalPrice)
        {
            finalPrice = userArr.at(i)->getOrdersArray().at(i).getFinalPrice();
            name = userArr.at(i)->getUserName();
        }
    }

    cout << finalPrice << endl;
    cout << name << endl;


    string findType;
    cout << "Enter type of drink: ";
    cin >> findType;
    for (int i = 0; i < userArr.size(); i++)
    {
        if (userArr.at(i)->getOrdersArray().at(i).getDrinks().getType() == findType)
        {
            cout << userArr.at(i)->getUserName() << endl;
        }
    }
}
