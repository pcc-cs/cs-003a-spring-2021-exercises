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
  int id() {
    return _id;
  }
  double weight() {
    return _weight;
  }
  std::string diet() {
    return "Food";
  }
  virtual std::string sound() {
    return "?";
  }
};

class Humanoid : public Animal {
 public:
  explicit Humanoid(double weight) : Animal(weight) {
  }
  // Redefinition
  std::string diet() {
    return "Meat";
  }
  std::string sound() {
    return "Yee!";
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
  std::string sound() {
    return "Hi!";
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
  std::string sound() {
    return "Moo!";
  }
};

int main() {
  Cow *c1p = new Cow(300);
  Animal *a1p = c1p;  // OK because Cow is also an Animal

  // "Redefinition"
  std::cout << "c1p->diet(): " << c1p->diet() << std::endl;
  std::cout << "a1p->diet(): " << a1p->diet() << std::endl;
  std::cout << std::endl;

  // "Overriding,"" exhibiting "polymorphism"
  std::cout << "c1p->sound(): " << c1p->sound() << std::endl;
  std::cout << "a1p->sound(): " << a1p->sound() << std::endl;
  std::cout << std::endl;

  Human *h1p = new Human(200);
  a1p = h1p;
  std::cout << "h1p->sound(): " << h1p->sound() << std::endl;
  std::cout << "a1p->sound(): " << a1p->sound() << std::endl;
  std::cout << std::endl;

  Humanoid *m1p = h1p;
  a1p = m1p;
  std::cout << "m1p->sound(): " << m1p->sound() << std::endl;
  std::cout << "a1p->sound(): " << a1p->sound() << std::endl;
  std::cout << std::endl;

  Humanoid *m2p = new Humanoid(160);
  a1p = m2p;
  std::cout << "m2p->sound(): " << m2p->sound() << std::endl;
  std::cout << "a1p->sound(): " << a1p->sound() << std::endl;
  std::cout << std::endl;

  // Don't forget to free memory!
  free(c1p);
  free(h1p);
  free(m2p);
}
