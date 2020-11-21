#pragma once
#include "player.h"
#include "card.h"

Player a1, a2;
Player* p1 = &a1;
Player* p2 = &a2;

void card_dispense(); // 카드 분배
int game(); // 승리 플레이어를 반환
bool isSum5();  // 같은 기호의 개수 합이 5인지 확인
