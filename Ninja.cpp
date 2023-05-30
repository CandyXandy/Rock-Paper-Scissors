#include "Ninja.h"

/**
 * Constructor for Ninja
 * Sets the name, beats and loses sets
 */
Ninja::Ninja() {
  name = "Ninja";
  beats.add("Pirate");
  beats.add("Zombie");
  loses.add("Robot");
  loses.add("Monkey");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Ninja::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 */
Move *Ninja::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}