#ifndef ADDS_PRAC1_MONKEY_H
#define ADDS_PRAC1_MONKEY_H

#include "Move.h"

/**
 * Definitions for Monkey class
 * Inherits from Move
 */
class Monkey : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Monkey();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_MONKEY_H
