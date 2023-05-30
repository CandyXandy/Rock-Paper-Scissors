#ifndef ADDS_PRAC1_ROBOT_H
#define ADDS_PRAC1_ROBOT_H

#include "Move.h"

/**
 * Definitions for Robot class
 * Inherits from Move
 */
class Robot : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Robot();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_ROBOT_H
