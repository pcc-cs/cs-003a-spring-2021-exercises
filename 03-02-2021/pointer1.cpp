/**
 * Pointer review.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

int main() {
  // Variables
  int i1 = 100;
  double d1 = 2.0;
  int i2 = 200;

  // Pointers to the above variables
  int *i1p = &i1;
  double *d1p = &d1;
  int *i2p = &i2;

  // Print values and pointers
  printf("i1: %d, i1p: %p\n", i1, i1p);
  printf("d1: %lf, d1p: %p\n", d1, d1p);
  printf("i2: %d, i2p: %p\n", i2, i2p);

  // Print values by "dereferencing" pointers
  printf("*i1p: %d, i1p: %p\n", *i1p, i1p);
  printf("*d1p: %lf, d1p: %p\n", *d1p, d1p);
  printf("*i2p: %d, i2p: %p\n", *i2p, i2p);

  // You can change value through pointer
  *i1p += 10;
  printf("i1 = %d\n", i1);
}
