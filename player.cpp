#include "player.h"

Card Player::getDeckTop() const {
	return deck.top();
}

Card Player::getOpenedTop() const {
	return opened.top();
}

int Player::getAmount() const {
	return deck.size();
}
int Player::getOpenedAmount() const {
	return opened.size();
}
void Player::pushDeck(Card c) {
	deck.push(c);
}

void Player::pushOpened(Card c) {
	opened.push(c);
}

bool Player::isDeckEmpty() {
	return deck.empty();
}
bool Player::isOpenedEmpty() {
	return opened.empty();
}
void Player::popDeck() {
	deck.pop();
}

void Player::popOpened() {
	opened.pop();
}

int Player::open() {
	if (getAmount() == 0) {  // if deck is empty
		return -1; // lose
	}

	pushOpened(getDeckTop());
	popDeck();
	
	return 0;  // open success
}
