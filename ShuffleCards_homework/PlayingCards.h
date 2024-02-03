#ifndef PlayingCards_H
#define PlayingCards_H
#include <iostream>

using namespace std;

class PlayingCards {
public:
	PlayingCards(string, string);
	string getType();
	string getSuit();
private:
	string type;
	string suit;
};

#endif // !PlayingCards_H

