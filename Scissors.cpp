#include "Scissors.h"

/**
 * Constructor for the Scissors class
 * Sets the name of the move and the moves it beats and loses to
 */
Scissors::Scissors() {
  name = "Scissors";
  beats.add("Paper");
  loses.add("Rock");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Scissors::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 * @return the winning move
 */
Move *Scissors::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}