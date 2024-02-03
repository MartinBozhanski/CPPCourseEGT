#include <iostream>
#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include <vector>

using namespace std;

int main()
{
    SavingAccount *member2 = new SavingAccount(100, 2);

    CheckingAccount *member3 = new CheckingAccount(120, 10);

    vector<Account*> accounts;
    accounts.push_back(member2);
    accounts.push_back(member3);

    for (int i = 0; i < accounts.size(); i++)
    {
        SavingAccount* ptr = dynamic_cast<SavingAccount*>(accounts.at(i));

        if (ptr != 0)
        {
            double interests = ptr->calculateInterest();
            ptr->credit(interests);
        }
    }

    cout << "Updated SavingAccount balance: " << member2->getBalance();

}