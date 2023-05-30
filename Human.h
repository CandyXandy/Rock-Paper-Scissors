#ifndef HUMAN_H
#define HUMAN_H

#include <string>

#include "Player.h"

/**
 * Definitions for Human class
 * Inherits from Player
 */
class Human : public Player {
 private:
  std::string name;

  Move *getMove(const std::string &input);

 public:
  Human();

  explicit Human(std::string name);
  Move *makeMove() override;
  std::string getName() override;
};

#endif