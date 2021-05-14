/**
 * Animal.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "animals/animal.h"

namespace {
  int gid = 0;
}

Animal::Animal() : _id(++gid) {
}

Animal::Animal(double weight) : _id(++gid), _weight(weight) {
}

int Animal::id() {
  return _id;
}

double Animal::weight() {
  return _weight;
}

std::string Animal::diet() {
  return "Food";
}

std::string Animal::sound() {
  return "?";
}
