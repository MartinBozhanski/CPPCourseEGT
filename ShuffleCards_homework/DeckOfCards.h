#ifndef DeckOfCards_H
#define DeckOfCards_H
#include <iostream>
#include <vector>
#include "PlayingCards.h"

using namespace std;

class DeckOfCards {
public:
	DeckOfCards(vector<PlayingCards*>);
	void raffleShuffle();
	void displayDeck();
	
private:
	vector<PlayingCards*> deckOfCards;
};

#endif // !DeckOfCards_H

