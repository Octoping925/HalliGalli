#pragma once

class Card
{
private:
	char type;
	int num;

public:
	Card(char type, int num);
	char getType();
	int getNumber();
};

// 한 카드에 다양한 종류의 기호가 들어갈 경우,
// 멤버변수를 변경해야 할 필요가 있음
