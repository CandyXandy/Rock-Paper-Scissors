#ifndef ADDS_PRAC1_SCISSORS_H
#define ADDS_PRAC1_SCISSORS_H

#include "Move.h"

/**
 * Definitions for Scissors class
 * Inherits from Move
 */
class Scissors : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Scissors();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_SCISSORS_H
