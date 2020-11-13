#include "game.h"
#include <random>
#include <time.h>

Card initDeck[56] = {
	Card('@', 1), Card('@', 1), Card('@', 1), Card('@', 1), Card('@', 1),
	Card('@', 2), Card('@', 2), Card('@', 2),
	Card('@', 3), Card('@', 3), Card('@', 3),
	Card('@', 4), Card('@', 4),
	Card('@', 5),

	Card('#', 1), Card('#', 1), Card('#', 1), Card('#', 1), Card('#', 1),
	Card('#', 2), Card('#', 2), Card('#', 2),
	Card('#', 3), Card('#', 3), Card('#', 3),
	Card('#', 4), Card('#', 4),
	Card('#', 5),

	Card('&', 1), Card('&', 1), Card('&', 1), Card('&', 1), Card('&', 1),
	Card('&', 2), Card('&', 2), Card('&', 2),
	Card('&', 3), Card('&', 3), Card('&', 3),
	Card('&', 4), Card('&', 4),
	Card('&', 5),

	Card('$', 1), Card('$', 1), Card('$', 1), Card('$', 1), Card('$', 1),
	Card('$', 2), Card('$', 2), Card('$', 2),
	Card('$', 3), Card('$', 3), Card('$', 3),
	Card('$', 4), Card('$', 4),
	Card('$', 5)
};

void card_dispense() {  // 최초 카드 분배
	int shuffle[56] = { 0, }, chk[56] = { 0, };
	int cnt = 0, r;

	srand((unsigned int)time(NULL));

	while (cnt < 56)
	{
		r = rand() % 56; // 0 ~ 55 난수 생성
		if (!chk[r]) { // 이미 뽑힌 적이 없는 숫자면
			++chk[r], shuffle[cnt] = r; // 체크 후 shuffle 배열에 추가
			++cnt;
		}
	}

	for (int i = 0; i < 28; ++i)
		p1.pushDeck(initDeck[shuffle[i]]);

	for(int i = 28; i < 56; ++i)
		p2.pushDeck(initDeck[shuffle[i]]);
}

bool isSum5()
{
	Card c1 = p1.getOpenedTop(), c2 = p2.getOpenedTop();

	if (c1.getType() == c2.getType()) {  // 두 카드의 타입이 같으면
		if (c1.getNumber() + c2.getNumber() == 5)  // 두 카드의 숫자 합이 5면 true
			return true;
	}

	else {  // 두 카드의 타입이 다르면
		if (c1.getNumber() == 5 || c2.getNumber() == 5)  // 둘 중 하나라도 숫자가 5면 true
			return true;
	}

	return false;
}

int bellPressed(int player)
{
	if (isSum5()) {
		// if (pressed(p1) p1 win;
		// else if (pressed(p2) p2 win;
	}
	return 1;
}


int game() 
{
	int turn = 1; // 어떤 플레이어의 턴인지 나타냄
	
	card_dispense();

	// 미완성
	return 0; // 승리 플레이어를 반환
}
