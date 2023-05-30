#include "Robot.h"

/**
 * Constructor for Robot
 * Sets the name, beats and loses sets
 */
Robot::Robot() {
  name = "Robot";
  beats.add("Ninja");
  beats.add("Zombie");
  loses.add("Monkey");
  loses.add("Pirate");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Robot::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 * @return the winning move
 */
Move *Robot::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}