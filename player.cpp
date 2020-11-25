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
void Player::pushDeck(const Card& c) {
	deck.push(c);
}

void Player::pushOpened(const Card& c) {
	opened.push(c);
}

bool Player::isDeckEmpty() const {
	return deck.empty();
}
bool Player::isOpenedEmpty() const {
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

void Player::setNumber(int num) {
	player_number = num;
}
int Player::getNumber() const {
	return player_number;
}
