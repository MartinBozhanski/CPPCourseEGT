#include <iostream>
#include "PlayingCards.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
	vector<PlayingCards*> deckOfCards;
	
	vector<string> suitsArr = { "Spades", "Hearts", "Diamonds", "Clubs" };
	vector<string> typeArr = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };

	for (int suit = 0; suit < suitsArr.size(); suit++)
	{
		string currentSuit = suitsArr[suit];
		for (int type = 0; type < typeArr.size(); type++)
		{
			string currentType = typeArr[type];
			PlayingCards* card = new PlayingCards(currentType, currentSuit);
			deckOfCards.push_back(card);
		}
	}

	DeckOfCards* deckOfPlayingCards = new DeckOfCards(deckOfCards);
	
	//deckOfPlayingCards->displayDeck();

	deckOfPlayingCards->raffleShuffle();
	deckOfPlayingCards->raffleShuffle();
	deckOfPlayingCards->displayDeck();
}