#pragma once
#include "player.h"
#include "card.h"
#include "ui.h"

void card_dispense(Player& p1, Player& p2); // 카드 분배
int game(); // 승리 플레이어를 반환
bool isSum5(Player& p1, Player& p2);  // 같은 기호의 개수 합이 5인지 확인
void collectCard(Player& p1, Player& p2);
int getch();