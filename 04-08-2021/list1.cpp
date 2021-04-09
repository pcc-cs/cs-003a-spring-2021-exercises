/**
 * Check out list.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "list.h"

int main() {
  List l1;

  l1.insert(0, 100);  // 100
  l1.dump();
  l1.insert(100, 200);  // 100->200
  l1.dump();
  l1.insert(100, 150);  // 100->150->200
  l1.dump();
  l1.insert(150, 220);  // 100->150->220->200
  l1.dump();
  l1.insert(200, 400);  // 100->150->220->200->400
  l1.dump();
  l1.insert(210, 320);  // 100->150->220->200->400->320
  l1.dump();
}
