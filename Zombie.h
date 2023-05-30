#ifndef ADDS_PRAC1_ZOMBIE_H
#define ADDS_PRAC1_ZOMBIE_H

#include "Move.h"

/**
 * Definitions for Zombie class
 * Inherits from Move
 */
class Zombie : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Zombie();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_ZOMBIE_H
