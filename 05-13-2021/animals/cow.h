/**
 * Cow.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef ANIMALS_COW_H_
#define ANIMALS_COW_H_

#include <string>
#include "animals/animal.h"

class Cow : public Animal {
 public:
  explicit Cow(double);
  std::string diet();
  std::string sound();
};

#endif  // ANIMALS_COW_H_
