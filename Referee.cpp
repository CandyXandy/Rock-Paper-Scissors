#include "Referee.h"

#include <iostream>

using namespace std;

/**
 * method to adjudicate game.
 * calls for both players to make their move, and then
 * moves through simple control structure to decide what to return
 * either returning the winner or a nullptr if there is a tie.
 * @param player1 : First player in match
 * @param player2 : Second player in match
 * @return Player reference if winner present otherwise nullptr
 */
Player *Referee::refGame(Player *player1, Player *player2) {
  Move *move1 = player1->makeMove();
  Move *move2 = player2->makeMove();
  if (move1->getName() == move2->getName()) {
    return nullptr;  // if the moves are the same, return a nullptr
  } else if (move1->compareMove(move2) ==
             move1) {  // if move1 beats move2, return player1
    return player1;
  } else if (move1->compareMove(move2) ==
             move2) {  // if move2 beats move1, return player2
    return player2;
  }
  return nullptr;  // if we somehow get here, return a nullptr
}
