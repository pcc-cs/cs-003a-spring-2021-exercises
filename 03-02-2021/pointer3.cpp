/**
 * Allocating memory.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

int main() {
  int *ip = new int[0x100];  // Allocates space to hold 256 integers

  // You can treat the pointer as if it's an array
  ip[0] = 100;
  ip[1] = 200;
  for (int i = 0; i < 2; i++) {
    printf("ip[%d] = %d\n", i, ip[i]);
  }

  // Always deallocate space you allocated
  delete [] ip;  // Note the [] after delete, which deletes the entire array
}
