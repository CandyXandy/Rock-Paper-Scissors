/*
 * Example taken from Week 2 Lecture 2
 */

#ifndef ADDS_PRAC1_SET_H
#define ADDS_PRAC1_SET_H

#include <vector>

template <class T>
class Set {
 private:
  std::vector<T> members;  // vector to store members of the set
 public:
  void add(T member);       // add a member to the set
  bool isMember(T member);  // check if a member is in the set
};

/**
 * Adds a member to the set
 * @param newMember : the member to add
 */
template <class T>
void Set<T>::add(T newMember) {
  // check if already a member, if not, add it
  if (!isMember(newMember)) {
    members.push_back(newMember);
  }
}

/**
 * Checks if a member is in the set
 * @param checkMember : the member to check
 * @return bool : true if the member is in the set, false otherwise
 */
template <class T>
bool Set<T>::isMember(T checkMember) {
  for (std::size_t i = 0; i < members.size(); i++) {
    if (members.at(i) == checkMember) {
      return true;
    }
  }
  return false;
}

#endif  // ADDS_PRAC1_SET_H
