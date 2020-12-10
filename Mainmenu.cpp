#include "game.h"
#include <stdlib.h>

int main() {
    system("clear");
    Menu();

    while (true) {
        switch (getch()) {
        case 's':
            game();
            Menu();
            break;
        case 'q':
            return 0;
        }
    }
}
