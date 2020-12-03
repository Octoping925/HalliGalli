#include "game.h"
#include <random>
#include <time.h>
#include <iostream>
#include <termio.h>

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

void card_dispense(Player& p1, Player& p2) {  // ���� ī�� �й�
	int shuffle[56] = { 0, }, chk[56] = { 0, };
	int cnt = 0, r;

	srand((unsigned int)time(NULL));

	while (cnt < 56)
	{
		r = rand() % 56; // 0 ~ 55 ���� ����
		if (!chk[r]) { // �̹� ���� ���� ���� ���ڸ�
			++chk[r], shuffle[cnt] = r; // üũ �� shuffle �迭�� �߰�
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
	//opened�� ī�尡 ���ų� ���ʿ��� ������ �� ī�尡 5�� ��츦 �����ϰ� ��� false ��ȯ
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

	if (c1.getType() == c2.getType()) {  // �� ī���� Ÿ���� ������
		if (c1.getNumber() + c2.getNumber() == 5)  // �� ī���� ���� ���� 5�� true
			return true;
	}

	else {  // �� ī���� Ÿ���� �ٸ���
		if (c1.getNumber() == 5 || c2.getNumber() == 5)  // �� �� �ϳ��� ���ڰ� 5�� true
			return true;
	}

	return false;
}

void collectCard(Player& p1, Player& p2) {
	//opened�� �ִ� ī��� �ڽ��� ���� ī�带 ��� �迭�� �־� �������� �ڽ��� ���� ����
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
		if (!chk[r]) { // �̹� ���� ���� ���� ���ڸ�
			++chk[r], shuffle[cnt] = r; // üũ �� shuffle �迭�� �߰�
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
	int playernum = 1; //�÷��̾� ������ ��Ÿ��
	card_dispense(p1, p2);
	waitUI(p1, p2, 1);	

	while (1) {
		char pushed = getch();
		if (pushed != 'a')
			continue;
		waitPrint(p1, p2, 2);
		playernum = 2;
		break;
	}

	for (;;) {
		char pushed = getch();
		if (pushed == 'a' && playernum == 1) {
			p1.open();
			gameUI(p1, p2, 2);
			playernum = 2;
		}//�÷��̾� ���ʸ� Ȯ���� �� ī�� ����
		else if (pushed == 'j' && playernum == 2) {
			p2.open();
			gameUI(p1, p2, 1);
			playernum = 1;
		}//�÷��̾� ���ʸ� Ȯ���� �� ī�� ����
		else if (pushed == 'd') {
			if (isSum5(p1, p2)) {
				collectCard(p1, p2);
				playernum = 1;
			}
			else {
				collectCard(p2, p1);
				playernum = 2;
			}
			waitUI(p1, p2, playernum);
		}//�˸°� ���� ������ p1�� ī�带 ����, �߸� ������ p2�� ī�带 ����
		else if (pushed == 'l') {
			if (isSum5(p1, p2)) {
				collectCard(p2, p1);
				playernum = 2;
			}
			else {
				collectCard(p1, p2);
				playernum = 1;
			}
			waitUI(p1, p2, playernum);
		}//�˸°� ���� ������ p2�� ī�带 ����, �߸� ������ p1�� ī�带 ����
		if (p1.isDeckEmpty()) { //p1�� ���� ��� p2 ��, �¸��� ��ȯ
			WinnerPrint(2);
			return 2;
		}
		else if (p2.isDeckEmpty()) { //p2�� ���� ��� p1 ��, �¸��� ��ȯ
			WinnerPrint(1);
			return 1;
		}
	}
}

int  getch() {
	int ch;

	struct termios buf;
	struct termios save;

	tcgetattr(0, &save);
	buf = save;

	buf.c_lflag &= ~(ICANON | ECHO);
	buf.c_cc[VMIN] = 1;
	buf.c_cc[VTIME] = 0;

	tcsetattr(0, TCSAFLUSH, &buf);

	ch = getchar();

	tcsetattr(0, TCSAFLUSH, &save);

	return ch;
}