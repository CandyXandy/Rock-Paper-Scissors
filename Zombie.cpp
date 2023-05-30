#include "Zombie.h"

/**
 * Constructor for Zombie
 * Sets the name, beats and loses sets
 */
Zombie::Zombie() {
  name = "Zombie";
  beats.add("Pirate");
  beats.add("Monkey");
  loses.add("Robot");
  loses.add("Ninja");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Zombie::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 * @return the winning move
 */
Move *Zombie::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}