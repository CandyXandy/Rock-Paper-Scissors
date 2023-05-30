#include "Pirate.h"

/**
 * Constructor for Pirate
 * Sets the name, beats and loses sets
 */
Pirate::Pirate() {
  name = "Pirate";
  beats.add("Robot");
  beats.add("Monkey");
  loses.add("Ninja");
  loses.add("Zombie");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Pirate::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 * @return the winning move
 */
Move *Pirate::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}