#include "Computer.h"

#include "Rock.h"

using namespace std;

Computer::Computer() {
  name = "Computer";  // value defaults to "Computer"
}

/**
 * Computer objects always return the 'rock' move
 */
Move *Computer::makeMove() {
  return new Rock();  // Computer always makes a "rock" move
}

/**
 * Computer objects always return "Computer"
 * on this method
 */
string Computer::getName() { return this->name; }
