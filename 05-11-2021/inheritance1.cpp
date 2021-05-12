/**
 * Inheritance.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

// Unnamed namespace to protect global variables
namespace {
  int gid = 1000;
}

class Animal {
 private:
  // Not visible to any other class, including derived ones
  int _id = ++gid;

 protected:
  // Visible to this and all derived classes, but not outside these
  double _weight;

 public:
  // Visible to all
  Animal() {
  }
  explicit Animal(double weight) : _weight(weight) {
  }
  std::string diet() {
    return "Food";
  }
  double weight() {
    return _weight;
  }
  int id() {
    return _id;
  }
};

class Humanoid : public Animal {
 public:
  explicit Humanoid(double weight) : Animal(weight) {
  }
  std::string diet() {
    return "Meat";
  }
};

class Human : public Humanoid {
 public:
  explicit Human(double weight) : Humanoid(weight) {
  }
  // Redefinition
  std::string diet() {
    return "Sushi";
  }
};

class Cow : public Animal {
 public:
  // Can directly assign to _weight because it is visible
  explicit Cow(double weight) {
    _weight = weight;
  }
  // Redefinition
  std::string diet() {
    return "Grass";
  }
};

int main() {
  Human h1(150);
  std::cout << h1.diet() << ", " << h1.weight() << " lb" << std::endl;
  // Access base class Humanoid's version
  std::cout << h1.Humanoid::diet() << ", " << h1.weight() << " lb" << std::endl;
  // And base class Animal's version of diet()
  std::cout << h1.Animal::diet() << ", " << h1.weight() << " lb" << std::endl;

  // Weight is set by Cow's constructor
  Cow c1(300);
  std::cout << c1.diet() << ", " << c1.weight() << " lb" << std::endl;

  // Can't access private or protected members here
  // std::cout << c1._id << std::endl;
  // std::cout << c1._weight << std::endl;
}
