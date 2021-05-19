/**
 * Memory allocation/deallocation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cstdlib>

int main() {
  // Very convenient to allocate
  int *i1p = new int[0x100];
  int *i2p = new int;

  // Character array
  // The () at the end initializes to 0
  // Make sure to terminate with nul character if not initialized
  // Like with: s1[3] = '\0';
  char *s1 = new char[0x10]();
  printf("s1 = '%s'\n", s1);  // Guaranteed to be empty
  s1[0] = 'H';
  s1[1] = 'i';
  s1[2] = '!';  // No need to add a nul terminator
  printf("s1 = '%s'\n", s1);

  // Lower level allocation
  char *s2 = static_cast<char *>(malloc(0x10));
  printf("s2 = '%s'\n", s2);  // Not guaranteed to be empty
  s2[0] = 'H';
  s2[1] = 'i';
  s2[2] = '!';
  s2[3] = '\0';  // Need to add a nul terminator
  printf("s2 = '%s'\n", s2);

  // Deallocate new with delete
  delete [] i1p;  // Note the [] for array
  delete i2p;
  delete [] s1;

  // Deallocate malloc with free
  free(s2);
}
