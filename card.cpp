#include "card.h"

Card::Card(char type, int num) {
	this->type = type;
	this->num = num;
}

char Card::getType() {
	return type;
}

int Card::getNumber() {
	return num;
}