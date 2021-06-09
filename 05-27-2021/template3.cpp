/**
 * Templated version of access (does NOT work).
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <cstdio>
#include "swap.h"

int main() {
  int i1 = 100, i2 = 200;
  printf("i1 = %d, i2 = %d\n", i1, i2);
  swap(i1, i2);
  printf("i1 = %d, i2 = %d\n", i1, i2);
}
