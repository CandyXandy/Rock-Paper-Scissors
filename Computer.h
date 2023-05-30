#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

#include "Player.h"

/**
 * Definitions for Computer class
 * Inherits from player
 */
class Computer : public Player {
  std::string name;

 public:
  Move *makeMove() override;

  std::string getName() override;

  Computer();
};

#endif