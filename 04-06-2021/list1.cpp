/**
 * Check out list.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "list.h"

// Macro to check test condition
#define check(b, s) (printf("%s: %s\n", s, b ? "PASS" : "FAIL"))

int main() {
  List l1;

  check(!l1.in(100), "in() should return false on empty");

  l1.append(100);
  check(l1.in(100), "in() should be true after add");
  check(!l1.in(200), "in() should be false if not in");

  l1.append(200);
  check(l1.in(100), "in() should be true after add");
  check(l1.in(200), "in() should be true after add");
}
