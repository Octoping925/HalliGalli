#include "game.h"
#include <random>
#include <time.h>
#include <conio.h>
#include <iostream>
using namespace std;

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

void card_dispense(Player& p1, Player& p2) {  // 최초 카드 분배
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

	for (int i = 28; i < 56; ++i)
		p2.pushDeck(initDeck[shuffle[i]]);
}

bool isSum5(Player& p1, Player& p2)
{
	//opened에 카드가 없거나 한쪽에만 있으면 한 카드가 5일 경우를 제외하고 모두 false 반환
	if (p1.isOpenedEmpty() && p2.isOpenedEmpty()) {
		return false;
	}
	else if (p1.isOpenedEmpty() && !p2.isOpenedEmpty()) {
		return p1.getOpenedTop().getNumber() == 5;
	}
	else if (!p1.isOpenedEmpty() && p2.isOpenedEmpty()) {
		return p2.getOpenedTop().getNumber() == 5;
	}
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

void collectCard(Player& p1, Player& p2) {
	//opened에 있는 카드와 자신의 덱의 카드를 모두 배열에 넣어 랜덤으로 자신의 덱이 넣음
	int arrsize;
	arrsize = p1.getAmount() + p1.getOpenedAmount() + p2.getOpenedAmount();
	Card* toPush = new Card[arrsize];
	int idx = 0;
	while (!p1.isDeckEmpty()) {
		toPush[idx] = p1.getDeckTop();
		p1.popDeck();
		idx++;
	}
	while (!p1.isOpenedEmpty()) {
		toPush[idx] = p1.getOpenedTop();
		p1.popOpened();
		idx++;
	}
	while (!p2.isOpenedEmpty()) {
		toPush[idx] = p2.getOpenedTop();
		p2.popOpened();
		idx++;
	}
	int shuffle[56] = { 0, };
	int chk[56] = { 0, };
	int cnt = 0, r;

	srand((unsigned int)time(NULL));

	while (cnt < arrsize)
	{
		r = rand() % arrsize;
		if (!chk[r]) { // 이미 뽑힌 적이 없는 숫자면
			++chk[r], shuffle[cnt] = r; // 체크 후 shuffle 배열에 추가
			++cnt;
		}
	}
	for (int i = 0; i < arrsize; ++i)
		p1.pushDeck(toPush[shuffle[i]]);

	delete[] toPush;
}

int game()
{
	Player p1 = Player(1), p2 = Player(2);
	int playernum = 1; //플레이어 순서를 나타냄

	card_dispense(p1, p2);
	waitUI(p1, p2);	

	while (1) {
		char pushed = _getch();
		if (pushed != 'a')
			continue;
		waitPrint(p1, p2);
		playernum = 2;
		break;
	}

	for (;;) {
		char pushed = _getch();
		if (pushed == 'a' && playernum == 1) {
			p1.open();
			gameUI(p1, p2);
			playernum = 2;
		}//플레이어 차례를 확인한 후 카드 제출
		else if (pushed == 'j' && playernum == 2) {
			p2.open();
			gameUI(p1, p2);
			playernum = 1;
		}//플레이어 차례를 확인한 후 카드 제출
		else if (pushed == 'd') {
			if (isSum5(p1, p2)) {
				collectCard(p1, p2);
				playernum = 1;
			}
			else {
				collectCard(p2, p1);
				playernum = 2;
			}
			waitUI(p1, p2);
		}//알맞게 종을 누르면 p1이 카드를 수거, 잘못 누르면 p2가 카드를 수거
		else if (pushed == 'l') {
			if (isSum5(p1, p2)) {
				collectCard(p2, p1);
				playernum = 2;
			}
			else {
				collectCard(p1, p2);
				playernum = 1;
			}
			waitUI(p1, p2);
		}//알맞게 종을 누르면 p2이 카드를 수거, 잘못 누르면 p1가 카드를 수거
		if (p1.isDeckEmpty()) { //p1의 덱이 비면 p2 승, 승리자 반환
			WinnerPrint(2);
			return 2;
		}
		else if (p2.isDeckEmpty()) { //p2의 덱이 비면 p1 승, 승리자 반환
			WinnerPrint(1);
			return 1;
		}
	}
}
