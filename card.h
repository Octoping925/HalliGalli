#pragma once

class Card
{
public:
	Card();
	Card(char type, int num);
	char getType() const;
	int getNumber() const;

private:
	char type;
	int num;
};
