#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

#include "Set.h"

/**
 * Abstract class that represents a move in the game
 * Each move has a name, a set of moves that it beats and a set of moves that it
 * loses to
 */
class Move {
 private:
  Set<std::string> beats;
  Set<std::string> loses;
  std::string name;

 public:
  virtual std::string getName() = 0;

  virtual Move *compareMove(Move *otherMove) = 0;
};

#endif