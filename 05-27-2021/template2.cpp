/**
 * Templates.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <cstdio>
#include <string>
#include <iostream>

// Templated version of swap for all types
template <class T>
void swap(T &x, T &y) {
  T z = x;
  x = y;
  y = z;
}

// Templated version with two types
template <class T, class U>
void dump(T x, U y) {
  std::cout << x << ", " << y << std::endl;
}

int main() {
  int i1 = 100, i2 = 200;
  printf("i1 = %d, i2 = %d\n", i1, i2);
  swap(i1, i2);
  printf("i1 = %d, i2 = %d\n", i1, i2);

  std::string s1 = "Hello", s2 = "Hi";
  printf("s1 = %s, s2 = %s\n", s1.c_str(), s2.c_str());
  swap(s1, s2);
  printf("s1 = %s, s2 = %s\n", s1.c_str(), s2.c_str());

  dump(i1, s1);
  dump(i1, i2);
}
