#include <iostream>
#include "game.h"

using namespace std;

int main() {
    system("mode con cols=108 lines=40 | title Halli Galli");
    cout << "" << endl;
    cout << "" << endl;
    system("color e9"); // e or f is best
    cout << "                                          Let's play  Halli Galli "
         << endl;

    while (1) {
        switch (Menu()) {
        case 'S':
        case 's':
            game();

        case 'Q':
        case 'q':
            return 0;
            break;
        }
    }
    return 0;
}
