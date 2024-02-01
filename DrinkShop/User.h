#ifndef User_H
#define User_H

#include <iostream>
#include <string>
#include <vector>
#include"Orders.h"

using namespace std;

class User {
public:
	User(string, vector<Orders>);
	void setUserName(string);
	void setOrdersArray(vector<Orders>);
	string getUserName();
	vector<Orders> getOrdersArray();
private:
	string userName;
	vector<Orders> ordersArray;
};

#endif // !User_H

