#ifndef Customer_H
#define Customer_H

#include <iostream>
#include <string>
#include <vector>
#include"Orders.h"

using namespace std;

class Customer {
public:
	Customer(string, vector<Orders>);
	void setUserName(string);
	void setOrdersArray(vector<Orders>);
	string getUserName();
	vector<Orders> getOrdersArray();
private:
	string userName;
	vector<Orders> ordersArray;
};

#endif // !Customer_H
