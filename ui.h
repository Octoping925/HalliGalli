#pragma once
#include <iostream>
#include "card.h"
#include "player.h"

using namespace std;

void gameUI();
void openedPrint(Card card);  // opened 카드의 내용을 출력
void deckPrint(Player player);