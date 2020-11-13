#pragma once
#include <stack>
#include "card.h"

using namespace std;

class Player
{
private:
	stack<Card> deck;
	stack<Card> opened;

public:
	Card getDeckTop();
	Card getOpenedTop();
	int getAmount();
	void pushDeck(Card c);
	void pushOpened(Card c);
	void popDeck();
	void popOpened();
	void open();
};