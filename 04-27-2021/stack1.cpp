/**
 * Check out stack.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "stack.h"

int main() {
  Stack s1;
  s1.push(3.1415926);
  s1.push(2.71828);
  printf("s1.pop() = %.8lf\n", s1.pop());  // 2.71828000
  printf("s1.pop() = %.8lf\n", s1.pop());  // 3.14159260
  printf("s1.pop() = %.8lf\n", s1.pop());  // 0.00000000
}
