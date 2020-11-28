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
	int getAmount() const;  // 현재 덱의 매수 반환
	int getOpenedAmount() const;
	void pushDeck(const Card& c);
	void pushOpened(const Card& c);
	bool isDeckEmpty() const;
	bool isOpenedEmpty() const;
	void popDeck();
	void popOpened();
	int open();  // 덱에서 카드를 뽑아 opened에 push. open할 수 없을 시 -1 반환
	void setNumber(int num);	// UI구현의 Case분류를 위한 PlayerNumber 부여
	int getNumber() const;	//UI구현의 Case분류를 위한 PlayerNumber 반환

private:
	stack<Card> deck;
	stack<Card> opened;
	int player_number;
};
