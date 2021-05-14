/**
 * Animal.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef ANIMALS_ANIMAL_H_
#define ANIMALS_ANIMAL_H_

#include <string>

class Animal {
 private:
  int _id;

 protected:
  double _weight;

 public:
  Animal();
  explicit Animal(double);
  int id();
  double weight();
  std::string diet();
  virtual std::string sound();
};

#endif  // ANIMALS_ANIMAL_H_
