/**
 * Sum utility implementation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

// "Global" variables, the bane of all coding, NEVER use these!
// int size = 1000;

// However, using inside an unnamed namespace is OK
namespace {
  int size = 1000;
}

// Sums all integers from 1 to given n
// n must be non-negative, <= 1000
int sum(int n) {
  int s = 0;
  // "Sad" path, always do the checks first!
  if (n > size) {
    return s;
  }
  for (int i = 1; i <= n; i++) {
    s += i;
  }
  return s;
}
