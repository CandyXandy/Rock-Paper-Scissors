#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Move.h"

/**
 * Abstract class that works as an interface for Human
 * and Computer objects.
 */
class Player {
 private:
  std::string name;

 public:
  virtual Move *makeMove() = 0;
  virtual std::string getName() = 0;
};

#endif