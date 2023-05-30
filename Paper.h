#ifndef ADDS_PRAC1_PAPER_H
#define ADDS_PRAC1_PAPER_H

#include "Move.h"

/**
 * Definitions for Paper class
 * Inherits from Move
 */
class Paper : public Move {
  std::string name;
  Set<std::string> beats;
  Set<std::string> loses;

 public:
  Paper();

  std::string getName() override;

  Move *compareMove(Move *otherMove) override;
};

#endif  // ADDS_PRAC1_PAPER_H
