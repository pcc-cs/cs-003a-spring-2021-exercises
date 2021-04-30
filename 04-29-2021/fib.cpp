/**
 * Fibonacci using different methods.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cinttypes>
#include <cstdlib>
#include <cstdio>

#define USAGE "Usage: fib <number> r|m"
#define MAX 255

// Has "exponential time complexity"
uint64_t fibr(uint8_t n) {
  // Base case, don't forget this!
  if (n <= 1) {
    return 1;
  }

  // Recursive step
  return fibr(n - 1) + fibr(n - 2);
}

// Using "memoization"
// Returns 0 if n is invalid
// O(n) time complexity
uint64_t fibs[MAX];
uint64_t fibm(uint8_t n) {
  // Sanity check
  if (n < 0 || n > MAX) {
    return 0;
  }

  // Base case, don't forget this!
  if (n <= 1) {
    return 1;
  }

  // Conditional recursive step
  // Don't repeat yourself principle (DRY)
  for (int i = 1; i <= 2; i++) {
    if (fibs[n - i] == 0) {
      fibs[n - i] = fibm(n - i);
    }
  }
  return fibs[n - 1] + fibs[n - 2];
}

int main(int argc, char *argv[]) {
  // Always check if you have valid inputs
  if (argc < 3) {
    fprintf(stderr, "%s\n", USAGE);  // Note that errors are sent to stderr
    exit(1);  // Exits the program with exit code 1
  }

  uint8_t n = std::atoi(argv[1]);
  uint64_t (*fib)(uint8_t);  // This declares a pointer to a function
  if (argv[2][0] == 'r') {
    fib = fibr;
  } else if (argv[2][0] == 'm') {
    fib = fibm;
  } else {
    fprintf(stderr, "%s\n", USAGE);  // Note that errors are sent to stderr
    exit(1);  // Exits the program with exit code 1
  }

  // Call the recursive function
  printf("fib(%d) = %ld\n", n, fib(n));
}
