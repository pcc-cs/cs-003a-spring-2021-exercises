/**
 * Inheritance.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include "animals/cow.h"
#include "utils/util.h"

int main() {
  Cow *c1 = new Cow(200);
  dump(c1);
}
