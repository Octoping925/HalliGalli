#include "player.h"

Player::Player(int num) { player_number = num; }

Card Player::getDeckTop() const {
	if (deck.empty()) return Card();
	return deck.top();
}

Card Player::getOpenedTop() const {
	if (opened.empty()) return Card();
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
	if (deck.empty()) {  // if deck is empty
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
