#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "game.h"

using namespace std;

int main() {
    system("mode con cols=108 lines=40 | title Halli Galli");
    system("color e9"); // e or f is best

    Menu();
    
    while (1) {
        char word = _getch(); // 엔터치지 않아도 바로 입력 받을 수 있게 하기 위해 cin x
        switch (word) {
        case 'S':
        case 's':
            game();

        case 'Q':
        case 'q':
            break;
        }
    }
    return 0;
}
