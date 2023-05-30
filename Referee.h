#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

/**
 * Definitions for Referee class
 */
class Referee {
 public:
  Player *refGame(Player *player1, Player *player2);
};

#endif