#pragma once
#include <stack>
#include "card.h"

using namespace std;

class Player
{
public:
	Player(int num);
	Card getDeckTop() const;
	Card getOpenedTop() const;
	int getDeckAmount() const;
	int getOpenedAmount() const;
	void pushDeck(const Card& c);
	void pushOpened(const Card& c);
	bool isDeckEmpty() const;
	bool isOpenedEmpty() const;
	void popDeck();
	void popOpened();
	int open();  // 덱에서 카드를 뽑아 opened에 push. open할 수 없을 시 -1 반환
	int getPlayerNumber() const;

private:
	stack<Card> deck;
	stack<Card> opened;
	int player_number;
};
