/**
 * Templates.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <cstdio>
#include <string>

// Swap for int
void swap1(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

// Swap for std::string
void swap2(std::string &x, std::string &y) {
  std::string z = x;
  x = y;
  y = z;
}

int main() {
  int i1 = 100, i2 = 200;
  printf("i1 = %d, i2 = %d\n", i1, i2);
  swap1(i1, i2);
  printf("i1 = %d, i2 = %d\n", i1, i2);

  std::string s1 = "Hello", s2 = "Hi";
  printf("s1 = %s, s2 = %s\n", s1.c_str(), s2.c_str());
  swap2(s1, s2);
  printf("s1 = %s, s2 = %s\n", s1.c_str(), s2.c_str());
}
