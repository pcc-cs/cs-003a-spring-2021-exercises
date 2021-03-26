/**
 * Check the classes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

#define COUNT 2

// Always "include what you use"
#include "complex.h"
#include "list.h"

int main() {
  List l1(COUNT);
  l1.add(Complex(3, 2));
  l1.add(Complex(-1.1, 0.5));
  l1.add(Complex(5.2, -6.1));  // Does NOT get added because list is full

  // "auto" keyword figures out the type at compile time
  // Could have also defined this as Complex *values = l1.values()
  // Always assign results of function calls to local variable (for efficiency)
  auto values = l1.values();
  for (int i = 0; i < COUNT; i++) {
    values[i].dump();
  }
}
