#include "card.h"

Card::Card(char type, int num) {
	this->type = type;
	this->num = num;
}

char Card::getType() const {
	return type;
}

int Card::getNumber() const {
	return num;
}
