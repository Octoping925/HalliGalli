#include "ui.h"

void gameUI(Player p1, Player p2, Card c1, Card c2) { 
     deckPrint(p1);   // Player1의 deck UI출력
     openedPrint(c1); // Player1의 opened UI출력
     cout << endl << endl;
     openedPrint(c2); // Player2의 opened UI출력
     deckPrint(p2);   // Player2의 deck UI출력
}

void waitUI(Player p1, Player p2){
     deckPrint(p1); // Player1의 deck UI출력
     emptyPrint();  // 빈 카드 출력
     cout << endl << endl;
     emptyPrint();  // 빈 카드 출력
     deckPrint(p2); // Player2의 deck UI출력
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
     int count, n;
     count = player.getAmount();
     if(count < 10){
          n = 1;
     } else {
          n = 2;
     }

     switch (n){     // 카드출력의 모양유지를 위해 덱의 size가 한자리와 두자리일 때로 나누어 구성했다.
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
               << "    [Player " << player.getNumber() << "]      " << endl;
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
               << "    [Player " << player.getNumber() << "]      " << endl;
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

void emptyPrint(){
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
               << "|           |"
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
}

void WinnerPrint(Player player){
     cout << "Winner : " << player.getNumber() << endl;
}