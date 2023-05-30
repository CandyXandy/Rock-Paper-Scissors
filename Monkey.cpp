#include "Monkey.h"

/**
 * Constructor for Monkey
 * Sets the name, beats and loses sets
 */
Monkey::Monkey() {
  name = "Monkey";
  beats.add("Ninja");
  beats.add("Robot");
  loses.add("Zombie");
  loses.add("Pirate");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Monkey::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 * @return the winning move
*/
Move *Monkey::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}