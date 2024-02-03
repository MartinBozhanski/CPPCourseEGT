#include "PlayingCards.h"

PlayingCards::PlayingCards(string type, string suit)
{
	this->type = type;
	this->suit = suit;
}

string PlayingCards::getType()
{
	return this->type;
}

string PlayingCards::getSuit()
{
	return this->suit;
}
