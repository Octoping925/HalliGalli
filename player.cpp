#include "player.h"

Card Player::getDeckTop() {
	return deck.top();
}

Card Player::getOpenedTop() {
	return opened.top();
}

int Player::getAmount() {
	return deck.size();
}

void Player::pushDeck(Card c) {
	deck.push(c);
}

void Player::pushOpened(Card c) {
	opened.push(c);
}

void Player::popDeck() {
	deck.pop();
}

void Player::popOpened() {
	opened.pop();
}

void Player::open() {
	if (getAmount() == 0) {
		// lose
	}

	pushOpened(getDeckTop());
	popDeck();
}
