/**
 * Inheritance.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstring>
#include <cstdio>

// Public methods can't be changed, they're part of a "contract" ("interface")
// But private members (variables and functions) are free to change
// These are the key ideas behind "encapsulation"
class Pet {
 private:
  // "Member" variables
  const char *_name;

 public:
  // "Default" constructor
  Pet() : _name("Pet") {
  }

  explicit Pet(const char *name) : _name(name) {
  }

  // "Accessor" (AKA "getter")
  // Exposes private members, with optional logic
  // Can check access, modify the values, change type, etc.
  const char *name() {
    return _name;
  }

  // "Mutator" (AKA "setter")
  // Can check validity, change format, type, etc.
  void setName(const char *name) {
    if (_name == nullptr || strlen(name) == 0) {
      return;
    }
    _name = name;
  }

  void dump() {
    printf("\nHi, my name '%s', I'm a pet!\n", _name);
  }
};

// Always use "public" for now, do NOT skip it (defaults to "private")
class Cat : public Pet {
 private:
  bool _hasLitterBox;

 public:
  explicit Cat(bool hasLitterBox = false) : _hasLitterBox(hasLitterBox) {
  }

  void dump() {
    printf("\nHi, my name is '%s', I'm a cat!\n", name());
    printf("And I %s have my own litter box!\n", _hasLitterBox ? "" : "don't");
  }
};

class Dog : public Pet {
 public:
  Dog() : Pet("Dog") {
  }

  void dump() {
    printf("\nHi, my name is '%s', I'm a dog!\n", name());
  }
};

int main() {
  // Using the "default" constructor
  Cat c1(true);
  c1.dump();
  c1.setName("Fluffy");  // Base class method accessible
  c1.dump();

  // Also using the "default" constructor
  Dog d1;
  d1.dump();
  d1.setName("Derby");
  d1.dump();

  // Creates an instance of Pet, NOT Dog
  Pet p1 = d1;
  p1.dump();
}
