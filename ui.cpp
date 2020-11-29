#include "ui.h"
#include <string>


void gameUI(Player& p1, Player& p2) {
    if (p1.isOpenedEmpty() > 0) {
        deckPrint(p1);   // Player1의 deck UI출력
        emptyPrint();
        cout << endl << "                                         ";
        cout << "   [Opened Count : " << p1.getOpenedAmount() + p2.getOpenedAmount() << " ]" << endl << endl;
        openedPrint(p2.getOpenedTop()); // Player2의 opened UI출력
        deckPrint(p2);   // Player2의 deck UI출력
    }
    else if (p2.isOpenedEmpty() > 0) {
        deckPrint(p1);   // Player1의 deck UI출력
        openedPrint(p1.getOpenedTop()); // Player1의 opened UI출력
        cout << endl << "                                         ";
        cout << "   [Opened Count : " << p1.getOpenedAmount() + p2.getOpenedAmount() << " ]" << endl << endl;
        emptyPrint();
        deckPrint(p2);   // Player2의 deck UI출력
    }
    else {
        deckPrint(p1);   // Player1의 deck UI출력
        openedPrint(p1.getOpenedTop()); // Player1의 opened UI출력
        cout << endl << "                                         ";
        cout << "   [Opened Count : " << p1.getOpenedAmount() + p2.getOpenedAmount() << " ]" << endl << endl;;
        openedPrint(p2.getOpenedTop()); // Player2의 opened UI출력
        deckPrint(p2);   // Player2의 deck UI출력
    }
}

void waitUI(Player& p1, Player& p2){
     deckPrint(p1); // Player1의 deck UI출력
     emptyPrint();  // 빈 카드 출력
     cout << endl << endl << endl;
     emptyPrint();  // 빈 카드 출력
     deckPrint(p2); // Player2의 deck UI출력
}

void waitPrint(Player& p1, Player& p2) {
        p1.open();
        deckPrint(p1);   // Player1의 deck UI출력
        openedPrint(p1.getOpenedTop()); // Player1의 opened UI출력
        cout << endl << "                                         ";
        cout << "   [Opened Count : " << p1.getOpenedAmount() + p2.getOpenedAmount() << " ]" << endl << endl;
        emptyPrint();
        deckPrint(p2);   // Player2의 deck UI출력
}
void openedPrint(Card card) {
     char shape;
     int num;
     shape = card.getType();
     num = card.getNumber();
     switch (num) {
          case 1:
              cout << "                                               "
                  << "┌───────────┐"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│     " << shape << "     │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "└───────────┘"
                  << "                                                " << endl;
          break;
          case 2:
              cout << "                                               "
                  << "┌───────────┐"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│     " << shape << "     │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│     " << shape << "     │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "└───────────┘"
                  << "                                                " << endl;
          break;
          case 3:
              cout << "                                               "
                  << "┌───────────┐"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│     " << shape << "     │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│   " << shape << "    " << shape << "  │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "└───────────┘"
                  << "                                                " << endl;
          break;
          case 4:
              cout << "                                               "
                  << "┌───────────┐"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│   " << shape << "    " << shape << "  │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│   " << shape << "    " << shape << "  │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "└───────────┘"
                  << "                                                " << endl;
              break;
          case 5:
              cout << "                                               "
                  << "┌───────────┐"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│   " << shape << "    " << shape << "  │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│     " << shape << "     │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│   " << shape << "    " << shape << "  │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "│           │"
                  << "                                                " << endl;
              cout << "                                               "
                  << "└───────────┘"
                  << "                                                " << endl;
              break;
     }
}

void deckPrint(Player& player) {
    char key[7] = { ' ', 'A', 'D', 'J', 'L' };
    int playernum = player.getNumber(), n = player.getAmount();
    string cnt = "";
    if (n < 10) cnt += "0";
    cnt += std::to_string(n);


    cout << "                                               "
        << "┌───────────┐"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│    " << cnt << "     │"
        << "    [Player " << playernum << "]      " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "    카드 오픈 : [" << key[playernum * 2 - 1] << "]                            " << endl;
    cout << "                                               "
        << "│           │"
        << "    종 치기 : [" << key[playernum * 2] << "]                              " << endl;
    cout << "                                               "
        << "└───────────┘"
        << "                                                " << endl;
}

void emptyPrint(){
    cout << "                                               "
        << "┌───────────┐"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
        << "│           │"
        << "                                                " << endl;
    cout << "                                               "
         << "└───────────┘"
         << "                                                " << endl;
}

void WinnerPrint(const int num){
    for (int n = 0; n < 15; n++) {
        cout << endl;
    }
     switch (num) {
     case 1 :         
         cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
         cout << "#           #            #  ###  #  #####     #  #####        ####      #   ########           #" << endl;
         cout << " #         # #          #        # #     #    # #     #      #    #     #  #        #         ##" << endl;
         cout << "  #       #   #        #     #   ##       #   ##       #    #      #    # #                  # #" << endl;
         cout << "   #     #     #      #      #   #        #   #        #   #        #   ##                     #" << endl;
         cout << "   #    #      #     #       #   #        #   #        #   ##########   #                      #" << endl;
         cout << "    #  #        #   #        #   #        #   #        #    #           #                      #" << endl;
         cout << "     # #         # #         #   #        #   #        #     #          #                      #" << endl;
         cout << "      #           #          #   #        #   #        #      #######   #                      #" << endl << endl;
         cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         break;
     case 2 :
         cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
         cout << "#           #            #  ###  #  #####     #  #####        ####      #   ########       ######   " << endl;
         cout << " #         # #          #        # #     #    # #     #      #    #     #  #        #     #      #  " << endl;
         cout << "  #       #   #        #     #   ##       #   ##       #    #      #    # #              #        # " << endl;
         cout << "   #     #     #      #      #   #        #   #        #   #        #   ##               #      ##  " << endl;
         cout << "   #    #      #     #       #   #        #   #        #   ##########   #                    ##     " << endl;
         cout << "    #  #        #   #        #   #        #   #        #    #           #                  ##       " << endl;
         cout << "     # #         # #         #   #        #   #        #     #          #                ##         " << endl;
         cout << "      #           #          #   #        #   #        #      #######   #               ############" << endl << endl;
         cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         break;
     }
     for (int n = 0; n < 14; n++) {
         cout << endl;
     }
}

void Menu() {

    cout << endl << endl;
    cout << "                                          Let's play  Halli Galli "
        << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        << endl;
    cout
        << "                                                                   "
        "                                                                   "
        "                                                                  "
        << endl;
    cout << "   #        #         #           #       #      #        ######  "
        "         #           #       #      #     "
        << endl;
    cout << "   #        #       #   #         #       #             #        "
        "#       #   #         #       #            "
        << endl;
    cout << "   #        #     #       #       #       #      #      #         "
        "     #       #       #       #      #     "
        << endl;
    cout << "   ##########    ###########      #       #      #      #      "
        "###    ###########      #       #      #     "
        << endl;
    cout << "   #        #    #         #      #       #      #      #        "
        "#    #         #      #       #      #     "
        << endl;
    cout << "   #        #    #         #      #       #      #      #        "
        "#    #         #      #       #      #     "
        << endl;
    cout << "   #        #    #         #      #       #      #        ####### "
        "    #         #      #       #      #     "
        << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "" << endl;

    cout << "                                           Press the button"
        << endl;
    cout << endl;

    cout << "                                              Start:  S" << endl;
    cout << "                                              Exit :  Q" << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        << endl;
}