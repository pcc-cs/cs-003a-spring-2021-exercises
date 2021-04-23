/**
 * Check out list.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "list.h"

// Macro to calculate the size
#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main() {
  List l1;
  int va[] = {10, 20, 30, 40, 50, 60};
  l1.init(va, SIZE(va));
  l1.dump();  // 10 -> 20 -> 30 -> 40 -> 50 -> 60

  l1.remove(40);
  l1.dump();  // 10 -> 20 -> 30 -> 50 -> 60

  l1.remove(45);
  l1.dump();  // 10 -> 20 -> 30 -> 50 -> 60

  l1.remove(60);
  l1.dump();  // 10 -> 20 -> 30 -> 50

  l1.remove(10);
  l1.dump();  // 20 -> 30 -> 50

  l1.remove(20);
  l1.remove(30);
  l1.remove(50);
  l1.remove(50);
  l1.dump();  //

  l1.append(100);
  l1.dump();  // 100
}
