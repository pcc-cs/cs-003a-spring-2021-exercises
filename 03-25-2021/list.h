/**
 * List class "declarations."
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

// Always use these "header guards"
#ifndef LIST_H_
#define LIST_H_

#include <cstdio>

#include "complex.h"

class List {
 private:
  int _size = 0;
  int _max;
  Complex *_values;

 public:
  explicit List(int);
  ~List();
  void add(Complex);
  Complex *values();
};

#endif  // LIST_H_
