#include "Human.h"

#include <iostream>

#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

using namespace std;

/**
 * Constructor for instances where name is given
 * @param name : The human player's name in string
 */
Human::Human(string name) { this->name = std::move(name); }

/**
 * Constructor for instances where no name is given
 * defaults to "Human"
 */
Human::Human() { name = "Human"; }

/**
 * This method allows the human player to make their
 * chosen move. Takes the Human's input and returns
 * the corresponding Move object.
 * @return char: the human's chosen move
 */
Move *Human::makeMove() {
  string input;
  cout << "Enter move: " << endl;
  cin >> input;
  return getMove(input);
}

/**
 * Returns the Human player's name.
 * @return string : name
 */
string Human::getName() { return this->name; }

/**
 * Takes the string input and returns the corresponding
 * Move object.
 * @param input : the string input
 * @return Move : the corresponding Move object or nullptr if no match
 */
Move *Human::getMove(const string &input) {
  if (input == "Rock") {  // Take the string and return a new instance of the
                          // corresponding move
    return new Rock();  // I think this violates the open-closed principle, but
                        // I'm not sure how to fix it
  } else if (input == "Paper") {
    return new Paper();
  } else if (input == "Scissors") {
    return new Scissors();
  } else if (input == "Pirate") {
    return new Pirate();
  } else if (input == "Ninja") {
    return new Ninja();
  } else if (input == "Monkey") {
    return new Monkey();
  } else if (input == "Robot") {
    return new Robot();
  } else if (input == "Zombie") {
    return new Zombie();
  }
  return nullptr;
}
