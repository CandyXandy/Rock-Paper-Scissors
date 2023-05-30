#ifndef ADDS_PRAC1_PIRATE_H
#define ADDS_PRAC1_PIRATE_H

#include "Move.h"

/**
 * Definitions for Pirate class
 * Inherits from Move
 */
class Pirate : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Pirate();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_PIRATE_H
