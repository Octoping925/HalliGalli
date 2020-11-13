#pragma once
#include "player.h"
#include "card.h"

Player p1, p2;

void card_dispense(); // 카드 분배
int game(); // 승리 플레이어를 반환
bool isSum5();
int bellPressed(int player);
