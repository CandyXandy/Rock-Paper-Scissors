#ifndef ADDS_PRAC1_NINJA_H
#define ADDS_PRAC1_NINJA_H

#include "Move.h"

/**
 * Definitions for Ninja class
 * Inherits from Move
 */
class Ninja : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Ninja();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_NINJA_H
