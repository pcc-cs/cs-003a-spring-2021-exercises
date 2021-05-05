/**
 * Inheritance.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

class Animal {
 private:
  double _weight;

 public:
  explicit Animal(double weight) : _weight(weight) {
  }
  std::string diet() {
    return "Food";
  }
  double weight() {
    return _weight;
  }
};

class Human : public Animal {
 public:
  explicit Human(double weight) : Animal(weight) {
  }
  std::string diet() {
    return "Sushi";
  }
};

class Cow : public Animal {
 public:
  explicit Cow(double weight) : Animal(weight) {
  }
  std::string diet() {
    return "Grass";
  }
};

int main() {
  Human h1(150);
  std::cout << h1.diet() << ", " << h1.weight() << "lb" << std::endl;
  // Can assign derived to bass class instance
  // Weight gets copied over
  // The identity of Human is lost
  Animal h1a = h1;
  std::cout << h1a.diet() << ", " << h1a.weight() << "lb" << std::endl;

  Cow c1(300);
  std::cout << c1.diet() << ", " << c1.weight() << "lb" << std::endl;
  Animal c1a = c1;
  std::cout << c1a.diet() << ", " << c1a.weight() << "lb" << std::endl;
}
