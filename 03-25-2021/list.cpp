/**
 * List class.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "list.h"

List::List(int n) : _max(n), _values(new Complex[n]) {
}

List::~List() {
  printf("~List() called, deleting memory...\n");
  delete[] _values;
}

void List::add(Complex c) {
  // "Sad" path
  if (_size == _max) {
    return;
  }

  // "Happy" path
  // ++ works here because is a "post" operation
  _values[_size++] = c;
}

Complex* List::values() {
  return _values;
}
