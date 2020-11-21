#pragma once
#include <stack>
#include "card.h"

using namespace std;

class Player
{
public:
	Card getDeckTop() const;
	Card getOpenedTop() const;
	int getAmount() const;  // 현재 덱의 매수 반환
	int getOpenedAmount() const;
	void pushDeck(Card c);
	void pushOpened(Card c);
	bool isDeckEmpty();
	bool isOpenedEmpty();
	void popDeck();
	void popOpened();
	int open();  // 덱에서 카드를 뽑아 opened에 push. open할 수 없을 시 -1 반환

private:
	stack<Card> deck;
	stack<Card> opened;
};
