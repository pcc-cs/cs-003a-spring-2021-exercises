/**
 * Show types with cout vs. printf.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <iostream>

typedef char small_int;

int main() {
  small_int x = 65;
  std::cout << "x = " << x << std::endl;
  printf("x = %d, %c\n", x, x);
}
