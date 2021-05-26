/**
 * Exceptions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

// Always use enum class for namespace protection
enum class NumError {
  NEGATIVE, TOO_LARGE, TOO_SMALL,
};

// "Declarations"
int a(int), b(int), c(int);

int a(int x) {
  if (x < 0) {
    // NumError
    throw NumError::NEGATIVE;
  }
  return 2 * b(x);
}

int b(int x) {
  return 1 + c(x);
}

int c(int x) {
  if (x > 100) {
    // const char *
    throw "value should be <= 100";
  }
  if (x == 25) {
    throw std::string("I don't like 25!");
  }
  return x + 10;
}

std::ostream &operator<<(std::ostream &os, const NumError e) {
  switch (e) {
    case NumError::NEGATIVE:
      os << "should be non negative";
      break;
    case NumError::TOO_LARGE:
      os << "too large";
      break;
    case NumError::TOO_SMALL:
      os << "too small";
      break;
  }
  return os;
}

int main() {
  int x;
  while (std::cin >> x) {
    // Types for catching should match exactly
    try {
      std::cout << a(x) << std::endl;
    } catch (NumError e) {
      // Only exceptions of the type NumError
      std::cout << "Error: " << e << std::endl;
    } catch (const char *e) {
      // Only exceptions of const char *
      std::cout << "Error: " << e << std::endl;
    } catch (...) {
      // DONT'T do this unless you MUST
      // At the minimum, log the error
      std::cout << "Error: unknown" << std::endl;
      // Quits the program with error code 101
      exit(101);
    }
  }

  // Optional, return 0 by default
  return 0;
}
