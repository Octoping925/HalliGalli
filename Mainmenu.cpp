#include <iostream>
#include <cstdlib>
#include "game.h"

using namespace std;

int main() {
    //system("mode con cols=108 lines=40 | title Halli Galli");
    //system("color e9"); // e or f is best
    
    Menu();
    
    while (1) {
        char word = getch(); // ����ġ�� �ʾƵ� �ٷ� �Է� ���� �� �ְ� �ϱ� ���� cin x
        switch (word) {
        case 'S':
        case 's':
            game();

        case 'Q':
        case 'q':
            return 0;
        }
    }
}
