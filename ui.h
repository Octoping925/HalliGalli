#pragma once
#include "player.h"

void gameUI(Player& p1, Player& p2, int turn);
void openedPrint(Card card);
void deckPrint(Player& player);
void emptyPrint();  // 빈 카드 출력
void WinnerPrint(const int player);
void Menu();
