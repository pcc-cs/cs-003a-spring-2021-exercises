/**
 * Templates.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <random>

template <class T>
T inc(T v) {
  return ++v;
}

template <class T>
T rnd() {
  return rand();
}

int main() {
  std::cout << inc(100) << std::endl;
  std::cout << inc(2.7) << std::endl;

  std::cout << rnd<int>() << std::endl;
}
