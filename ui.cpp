#include "ui.h"

void gameUI() {
     /*
    cout << endl;
    cout << "                                                "
         << "┌──────────┐"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "    Player 1                                    " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "    카드 넘기기 : a                             " << endl;
    cout << "                                                "
         << "│          │"
         << "    종 치기 : d                                 " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "└──────────┘"
         << "                                                " << endl;
    cout << "                                                "
         << "┌──────────┐"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "└──────────┘"
         << "                                                " << endl;
         cout << endl << endl;
    cout << "                                                "
         << "┌──────────┐"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "└──────────┘"
         << "                                                " << endl;
    cout << "                                                "
         << "┌──────────┐"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "     Player 2                                   " << endl;
    cout << "                                                "
         << "│          │"
         << "                                                " << endl;
    cout << "                                                "
         << "│          │"
         << "     카드 넘기기 : j                            " << endl;
    cout << "                                                "
         << "│          │"
         << "     종 치기 : l                                " << endl;
    cout << "                                                "
         << "└──────────┘"
         << "                                                " << endl;
     */
     
}

void openedPrint(Card card) {
     char shape;
     int num;
     shape = card.getType();
     num = card.getNumber();
     switch (num) {
          case 1:
          cout << "                                                "
               << "┌───────────┐"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│     " << shape << "     │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "└───────────┘"
               << "                                                " << endl;
          break;
          case 2:
          cout << "                                                "
               << "┌───────────┐"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│       " << shape << "   │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│    " << shape << "      │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "└───────────┘"
               << "                                                " << endl;
          break;
          case 3:
          cout << "                                                "
               << "┌───────────┐"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│      " << shape << "    │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│   " << shape << "    " << shape << "  │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "└───────────┘"
               << "                                                " << endl;
          break;
          case 4:
          cout << "                                                "
               << "┌───────────┐"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│      " << shape << "    │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│   " << shape << "    " << shape << "  │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│     " << shape << "     │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "└───────────┘"
               << "                                                " << endl;
          break;
          case 5:
          cout << "                                                "
               << "┌───────────┐"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│    " << shape << "    " << shape << " │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│      " << shape << "    │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│   " << shape << "    " << shape << "  │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "└───────────┘"
               << "                                                " << endl;
          break;
     }
}

void deckPrint(Player player) {
     int count, twice;
     count = player.getAmount();
     if(count < 10){
          twice = 1;
     } else {
          twice = 2;
     }

     switch (twice){     // 카드출력의 모양유지를 위해 덱의 size가 한자리와 두자리일 때로 나누어 구성했다.
          case 1:
          cout << "                                                "
               << "┌───────────┐"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│    0" << count << "     │"
               << "    [ Player " << player.getNumber() << "]      " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "    카드 오픈 : [A]                             "
               << "│           │"
               << "                                                " << endl;
          cout << "    종 치기 : [D]                               "
               << "└───────────┘"
               << "                                                " << endl;
          break;

          case 2:
          cout << "                                                "
               << "┌───────────┐"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│    " << count << "     │"
               << "    [ Player " << player.getNumber() << "]      " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "                                                "
               << "│           │"
               << "                                                " << endl;
          cout << "    카드 오픈 : [J]                             "
               << "│           │"
               << "                                                " << endl;
          cout << "    종 치기 : [L]                               "
               << "└───────────┘"
               << "                                                " << endl;
          break;
     }

     

}
void gotoxy(int x, int y) {
    printf("\033[%d;%df", y, x);
    fflush(stdout);
}