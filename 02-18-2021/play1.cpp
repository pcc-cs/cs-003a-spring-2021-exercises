/**
 * C++ review.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

// Note that we need to specify the types of params and return value
// a, b are "formal parameters"
// Can't call with sum("x", "y") because C++ is "strongly typed"
// Won't even compile with string args because it is "statically typed"
int sum(int a, int b) {
  return a + b;
}

int main() {
  int x = 100, y = 200;

  // Note the format string and the placeholder "%d" for int param
  // Param type in call to sum() MUST match argument type
  // x, y are "actual parameters" AKA "arguments"
  printf("x + y = %d\n", sum(x, y));
}
