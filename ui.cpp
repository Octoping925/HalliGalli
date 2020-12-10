#include "ui.h"
#include <iostream>
#include <stdlib.h>
#include <string>

void gameUI(Player &p1, Player &p2, int turn) {
    system("clear");
    deckPrint(p1);
    openedPrint(p1.getOpenedTop());
    cout << endl << "                               ";
    cout << "   [ Opened Count : "
         << p1.getOpenedAmount() + p2.getOpenedAmount() << " ]";
    cout << "   /   [ TURN : PLAYER " << turn << " ]" << endl << endl;
    openedPrint(p2.getOpenedTop());
    deckPrint(p2);
}

void openedPrint(Card card) {
    char shape = card.getType();

    switch (card.getNumber()) {
    case 1:
        cout << "                                               "
             << "┌───────────┐"  << endl;
        cout << "                                               "
             << "│           │"  << endl;
        cout << "                                               "
             << "│           │"  << endl;
        cout << "                                               "
             << "│           │"  << endl;
        cout << "                                               "
             << "│     " << shape << "     │"  << endl;
        cout << "                                               "
             << "│           │"  << endl;
        cout << "                                               "
             << "│           │"  << endl;
        cout << "                                               "
             << "│           │"  << endl;
        cout << "                                               "
             << "└───────────┘"  << endl;
        break;
    case 2:
        cout << "                                               "
             << "┌───────────┐"  << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│     " << shape << "     │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│     " << shape << "     │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "└───────────┘" << endl;
        break;
    case 3:
        cout << "                                               "
             << "┌───────────┐" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│     " << shape << "     │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│   " << shape << "   " << shape << "   │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "└───────────┘" << endl;
        break;
    case 4:
        cout << "                                               "
             << "┌───────────┐" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│   " << shape << "   " << shape << "   │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│   " << shape << "   " << shape << "   │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "└───────────┘" << endl;
        break;
    case 5:
        cout << "                                               "
             << "┌───────────┐" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│   " << shape << "   " << shape << "   │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│     " << shape << "     │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "│   " << shape << "   " << shape << "   │" << endl;
        cout << "                                               "
             << "│           │" << endl;
        cout << "                                               "
             << "└───────────┘" << endl;
        break;

    default:
        emptyPrint();
    }
}

void deckPrint(Player &player) {
    char key[5] = {' ', 'A', 'D', 'J', 'L'};
    int playernum = player.getPlayerNumber(), n = player.getDeckAmount();
    string cnt = "";
    if (n < 10)
        cnt += "0";
    cnt += std::to_string(n);

    cout << "                                               "
         << "┌───────────┐" << endl;
    cout << "                                               "
         << "│           │" << endl;
    cout << "                                               "
         << "│           │" << endl;
    cout << "                                               "
         << "│           │" << endl;
    cout << "                                               "
         << "│    " << cnt << "     │    [Player " << playernum << "]      " << endl;
    cout << "                                               "
         << "│           │" << endl;
    cout << "                                               "
         << "│           │"
         << "    카드 오픈 : [" << key[playernum * 2 - 1] << "]" << endl;
    cout << "                                               "
         << "│           │"
         << "    종 치기   : [" << key[playernum * 2] << "]" << endl;
    cout << "                                               "
         << "└───────────┘"<< endl;
}

void emptyPrint() {
    cout << "                                               "
         << "┌───────────┐" << endl;
    for (int i = 0; i < 7; ++i)
        cout << "                                               "
            << "│           │" << endl;

    cout << "                                               "
         << "└───────────┘"  << endl;
}

void WinnerPrint(const int player) {
    system("clear");
    for (int i = 0; i < 5; i++) {
        cout << endl;
    }

    cout << "────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
    cout << endl;
    cout << "                                             $$$$$$$           $$$$                     " << endl;
    cout << "                                           $$ $$$$$$          $$$$$                     " << endl;
    cout << "                                           $$$$$$$$$          $$$$$                     " << endl;
    cout << "                                           $$$                 $$$$$                    " << endl;
    cout << "                                   $$       $$$$$$$            $$$$$                    " << endl;
    cout << "                                   $$     $$$$$                 $$$$                    " << endl;
    cout << "                                    $$  $$$$$$$$$$               $$                     " << endl;
    cout << "                                      $$$$$$$$$$$                 $$                    " << endl;
    cout << "                                        $$$$$$$$$$                 $                    " << endl;
    cout << "                                           $$$$$$$$               $$$                   " << endl;
    cout << "                                           $$$$$$                                       " << endl;
    cout << endl;
    cout << "                                             Congratulations!!!    " << endl;
    cout << "                                      Winner Winner Chicken Dinner " << endl;
    cout << endl;

    switch (player) {
    case 1:
        cout << "      #         # #          #    #   #  # # #     #  # # #       ######     #   #####             ##" << endl;
        cout << "       #       #   #        #         #       #    #       #    #        #   #  #                 # #" << endl;
        cout << "        #     #     #      #      #   #        #   #        #   #        #   # #                    #" << endl;
        cout << "        #    #      #     #       #   #        #   #        #   ##########   #                      #" << endl;
        cout << "         #  #        #   #        #   #        #   #        #   #            #                      #" << endl;
        cout << "          # #         # #         #   #        #   #        #    #           #                      #" << endl;
        cout << "           #           #          #   #        #   #        #     #######    #                      #" << endl;
        break;

    case 2:
        cout << "      #         # #          #    #   #  # # #     #  # # #       ######     #   #####       ########     " << endl;
        cout << "       #       #   #        #         #       #    #       #    #        #   #  #           #        #    " << endl;
        cout << "        #     #     #      #      #   #        #   #        #   #        #   # #                    #     " << endl;
        cout << "        #    #      #     #       #   #        #   #        #   ##########   #                    #       " << endl;
        cout << "         #  #        #   #        #   #        #   #        #   #            #                  #         " << endl;
        cout << "          # #         # #         #   #        #   #        #    #           #                #           " << endl;
        cout << "           #           #          #   #        #   #        #     #######    #              ###########   " << endl;
        break;
    }

    cout << endl;
    cout << "────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
    cout << endl;
    cout << "                                          Press Any Key to Restart" << endl;
    for (int i = 0; i < 5; i++) {
        cout << endl;
    }
}

void Menu() {
    cout << endl << endl;
    cout << "                                           Let's play Halli Galli" << endl;
    cout << endl;
    cout << "────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
    cout << endl << endl;

    cout << "   #        #         #           #       #      #        ######           #           #       #      #     " << endl;
    cout << "   #        #       #   #         #       #             #        #       #   #         #       #            " << endl;
    cout << "   #        #     #       #       #       #      #      #              #       #       #       #      #     " << endl;
    cout << "   ##########    ###########      #       #      #      #      ###    ###########      #       #      #     " << endl;
    cout << "   #        #    #         #      #       #      #      #        #    #         #      #       #      #     " << endl;
    cout << "   #        #    #         #      #       #      #      #        #    #         #      #       #      #     " << endl;
    cout << "   #        #    #         #      #       #      #        #######     #         #      #       #      #     " << endl;

    for (int i = 0; i < 8; ++i)
        cout << endl;

    cout << "                                              Press the button" << endl;
    cout << endl;

    cout << "                                                 Start:  S" << endl;
    cout << "                                                 Exit :  Q" << endl;

    for (int i = 0; i < 10; ++i)
        cout << endl;

    cout << "────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
    cout << "                                      Operating normally at 108 x 40 size" << endl;
    cout << endl;
}
