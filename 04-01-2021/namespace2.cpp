/**
 * More common usage of namespaces.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

// From file 1, likely developed by dev 1
namespace col {
  const int size = 0x100;
}

// From file 2, likely developed by dev 2
namespace red {
  const int size = 0x10;
}

int main() {
  printf("col::size = 0x%x, rwc::size = 0x%x\n", col::size, red::size);
}
