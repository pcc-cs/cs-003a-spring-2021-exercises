/**
 * Cow.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "animals/cow.h"

Cow::Cow(double weight) {
  _weight = weight;
}

std::string Cow::diet() {
  return "Grass";
}

std::string Cow::sound() {
  return "Moo!";
}
