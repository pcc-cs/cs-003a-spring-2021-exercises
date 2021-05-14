/**
 * Utilities, written depending only on Animal.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "utils/util.h"
#include "animals/animal.h"

// This function is general and does NOT need to
// know about any of the derived class.
void dump(Animal *ap) {
  printf("ID %d: weight %.1lf, diet '%s', sound '%s'\n",
    ap->id(), ap->weight(), ap->diet().c_str(), ap->sound().c_str());
}
