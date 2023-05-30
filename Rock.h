#ifndef ADDS_PRAC1_ROCK_H
#define ADDS_PRAC1_ROCK_H

#include "Move.h"

/**
 * Definitions for Rock class
 * Inherits from Move
 */
class Rock : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Rock();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_ROCK_H
