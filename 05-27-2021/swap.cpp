/**
 * Templated swap (does NOT work).
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include "swap.h"

template <class T>
void swap(T &x, T &y) {
  T z = x;
  x = y;
  y = z;
}
