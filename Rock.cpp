#include "Rock.h"

/**
 * Constructor for Rock objects
 * Sets the name of the move and the moves it beats and loses to
 */
Rock::Rock() {
  name = "Rock";
  beats.add("Scissors");
  loses.add("Paper");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Rock::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 * @return the winning move
 */
Move *Rock::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}