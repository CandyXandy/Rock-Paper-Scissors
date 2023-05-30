#include "Paper.h"

/**
 * Constructor for the Paper class
 * Sets the name of the move and the moves it beats and loses to
 */
Paper::Paper() {
  name = "Paper";
  beats.add("Rock");
  loses.add("Scissors");
}

/**
 * Gets the name of the move
 * @return the name of the move
 */
std::string Paper::getName() { return this->name; }

/**
 * Compares this move to another move
 * @param otherMove the move to compare to
 * @return the winning move
 */
Move *Paper::compareMove(Move *otherMove) {
  if (beats.isMember(otherMove->getName())) {
    return this;
  } else if (loses.isMember(otherMove->getName())) {
    return otherMove;
  }
  return nullptr;
}