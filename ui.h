#pragma once
#include <iostream>
#include "card.h"
#include "player.h"

using namespace std;

void gameUI(Player p1, Player p2, Card c1, Card c2);
void waitPrint(Player p1, Player p2);
void openedPrint(Card card);  // opened 카드의 내용을 출력
void deckPrint(Player player);
void emptyPrint();
void WinnerPrint();