#pragma once
#include "player.h"
#include "ui.h"
#define CARDCOUNT 56  // 전체 카드 수 (반드시 짝수여야함)

int* makeRandArr(int size);  // 랜덤의 원소를 가진 size 크기의 배열 생성
void card_dispense(Player& p1, Player& p2); // 최초 카드 분배
void game();
bool isSum5(Player& p1, Player& p2);  // 같은 기호의 개수 합이 5인지 확인
void collectCard(Player& p1, Player& p2);  //opened의 카드와 자신의 덱의 카드를 모두 랜덤으로 자신의 덱에 넣음
int getch();  // 키보드 인식 함수
