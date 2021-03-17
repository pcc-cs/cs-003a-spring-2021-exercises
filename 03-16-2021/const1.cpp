/**
 * Keyword const.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

int main() {
  // The value is constant
  const int i1 = 100;
  // Can't do: i1 = 200;

  int i2;

  // Pointer whose contents can't be changed
  // Pointer itself can be changed
  const int *i2p = &i2;
  i2p = nullptr;
  // Can't do : *i2p = 200

  // Pointer whose contents can be changed
  // Pointer itself can't be changed
  int *const i3p = &i2;
  *i3p = 200;
  printf("i2 = %d\n", i2);

  // Neither pointer nor its contents can be changed
  const int *const i4p = nullptr;

  // Constant "C string"
  const char *msg = "Привет, мир";
  printf("%s\n", msg);
}
