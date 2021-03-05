/**
 * Different ways to swap.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

// Doesn't swap!
void swap1(int x, int y) {
  int c = x;
  x = y;
  y = c;
}

void swap2(int *xp, int *yp) {
  int c = *xp;  // * "dereferences" the pointer (gets the value)
  *xp = *yp;  // NOT xp = yp
  *yp = c;  // You also need * on the left side
}

// Don't do this because the caller won't know the function can change values!
void swap3(int &x, int &y) {
  int c = x;
  x = y;
  y = c;
}

// OK to use pass by reference when you don't want to make a copy
// Useful when the values being passed are large
void dump(const int &x, const int &y) {
  printf("(%d, %d)\n", x, y);
}

int main() {
  int a = 10, b = 20;
  dump(a, b);

  // Doesn't swap
  swap1(a, b);
  dump(a, b);

  // Swaps, and it's clear the values can change
  swap2(&a, &b);
  dump(a, b);

  // Swaps, but it's not clear the value can change
  swap3(a, b);
  dump(a, b);
}
