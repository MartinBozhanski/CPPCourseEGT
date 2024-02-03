#include "DeckOfCards.h"

DeckOfCards::DeckOfCards(vector<PlayingCards*> deckOfCards)
{
	this->deckOfCards = deckOfCards;
}

void DeckOfCards::raffleShuffle()
{
	for (int i = 0; i < deckOfCards.size() - 26; i++)
	{
		for (int c = deckOfCards.size() - 1; c >= deckOfCards.size() - 26; c--)
		{
			PlayingCards* firstCard = deckOfCards[i];
			PlayingCards* secondCard = deckOfCards[c];
			deckOfCards[i] = secondCard;
			deckOfCards[c] = firstCard;
		}
	}
}

void DeckOfCards::displayDeck()
{
	for (int i = 0; i < deckOfCards.size(); i++)
	{
		cout << deckOfCards[i]->getType() << " " << deckOfCards[i]->getSuit() << endl;
	}
}

