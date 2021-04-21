/**
 * Demo delete of classes.
 * 
 * Copyright (c) 2021, Sekhar Ravinutala.
 */

#include <string>
#include <iostream>

#define DEFAULT_SIZE 30

class Section {
 private:
  std::string *_students;

 public:
  // Be sure to use "explicit" for single parameter constructor
  explicit Section(int n) {
    // Always check for validity, note the "ternary" operator (a ? b : c)
    _students = new std::string[n < 1 ? DEFAULT_SIZE : n];
  }
  // Destructor
  ~Section() {
    // Don't forget the []
    delete [] _students;
    std::cout << "~Section()" << std::endl;
  }
};

int main() {
  // "Automatic" variable, created on the stack
  // Destructor called automatically
  Section s1(10);

  // "Dynamic" variable, created on the heap
  // Destructor NOT called automatically, leads to memory leak
  Section *s2p = new Section(20);

  // Must delete explicitly
  delete s2p;
}
