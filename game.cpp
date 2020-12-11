#include "game.h"
#include <iostream>
#include <random>
#include <termio.h>
#include <time.h>

using namespace std;

Card initDeck[CARDCOUNT] = {
    Card('@', 1), Card('@', 1), Card('@', 1), Card('@', 1), Card('@', 1),
    Card('@', 2), Card('@', 2), Card('@', 2), Card('@', 3), Card('@', 3),
    Card('@', 3), Card('@', 4), Card('@', 4), Card('@', 5),

    Card('#', 1), Card('#', 1), Card('#', 1), Card('#', 1), Card('#', 1),
    Card('#', 2), Card('#', 2), Card('#', 2), Card('#', 3), Card('#', 3),
    Card('#', 3), Card('#', 4), Card('#', 4), Card('#', 5),

    Card('&', 1), Card('&', 1), Card('&', 1), Card('&', 1), Card('&', 1),
    Card('&', 2), Card('&', 2), Card('&', 2), Card('&', 3), Card('&', 3),
    Card('&', 3), Card('&', 4), Card('&', 4), Card('&', 5),

    Card('$', 1), Card('$', 1), Card('$', 1), Card('$', 1), Card('$', 1),
    Card('$', 2), Card('$', 2), Card('$', 2), Card('$', 3), Card('$', 3),
    Card('$', 3), Card('$', 4), Card('$', 4), Card('$', 5)};

int *makeRandArr(int size) {
    int *arr = new int[size]{ 0, };
    int *chk = new int[size]{ 0, };
    int cnt = 0;

    srand((unsigned int)time(NULL));

    while (cnt < size) {
        int r = rand() % size;      // 0 ~ size 난수 생성
        if (!chk[r]) {              // 이미 뽑힌 적이 없는 숫자면
            ++chk[r], arr[cnt] = r; // 체크 후 shuffle 배열에 추가
            ++cnt;
        }
    }

    delete[] chk;
    return arr;
}

void card_dispense(Player &p1, Player &p2) {
    int *shuffle = makeRandArr(CARDCOUNT);

    for (int i = 0; i < CARDCOUNT / 2; ++i)
        p1.pushDeck(initDeck[shuffle[i]]);

    for (int i = CARDCOUNT / 2; i < CARDCOUNT; ++i)
        p2.pushDeck(initDeck[shuffle[i]]);

    delete[] shuffle;
}

bool isSum5(Player &p1, Player &p2) {
    Card c1 = p1.getOpenedTop(), c2 = p2.getOpenedTop();

    if (c1.getType() == c2.getType()) {
        return c1.getNumber() + c2.getNumber() == 5;
    }

    else return (c1.getNumber() == 5 || c2.getNumber() == 5);
}

void collectCard(Player &p1, Player &p2) {
    int arrsize = p1.getDeckAmount() + p1.getOpenedAmount() + p2.getOpenedAmount();
    Card *toPush = new Card[arrsize];
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
    int *shuffle = makeRandArr(arrsize);

    for (int i = 0; i < arrsize; ++i)
        p1.pushDeck(toPush[shuffle[i]]);

    delete[] toPush;
    delete[] shuffle;
}

void game() {
    Player p1(1);
    Player p2(2);
    int turn = 1;
    card_dispense(p1, p2);

    while (true) {
        gameUI(p1, p2, turn);

        switch (getch()) {
        case 'a': // Player 1 카드 뽑기
            if (turn == 1) {
                p1.open();
                turn = 2;
            }
            break;

        case 'j': // Player 2 카드 뽑기
            if (turn == 2) {
                p2.open();
                turn = 1;
            }
            break;

        case 'd': // Player 1 종 치기
            if (!p1.isOpenedEmpty() || !p2.isOpenedEmpty()) {
                if (isSum5(p1, p2)) {
                    collectCard(p1, p2);
                    turn = 1;
                }
                else {
                    collectCard(p2, p1);
                    turn = 2;
                }
            }
            break;

        case 'l': // Player 2 종 치기
            if (!p1.isOpenedEmpty() || !p2.isOpenedEmpty()) {
                if (isSum5(p1, p2)) {
                    collectCard(p2, p1);
                    turn = 2;
                }
                else {
                    collectCard(p1, p2);
                    turn = 1;
                }
            }
            break;
        }

        if (p1.isDeckEmpty()) {
            WinnerPrint(2);
            getch();
            break;
        }

        else if (p2.isDeckEmpty()) {
            WinnerPrint(1);
            getch();
            break;
        }
    }
}

int getch() {
    struct termios buf;
    struct termios save;

    tcgetattr(0, &save);
    buf = save;

    buf.c_lflag &= ~(ICANON | ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &buf);

    int ch = getchar();

    tcsetattr(0, TCSAFLUSH, &save);

    if ('A' <= ch && ch <= 'Z') {
        ch += 'a' - 'A';
    }

    return ch;
}
