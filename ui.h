#pragma once
#include <iostream>
#include "card.h"
#include "player.h"

void gameUI(Player& p1, Player& p2, int playernum);
void openedPrint(Card card);  // opened 카드의 내용을 출력
void deckPrint(Player& player);
void emptyPrint();
void WinnerPrint(const int num);
void Menu();