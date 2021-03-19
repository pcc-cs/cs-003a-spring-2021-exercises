/**
 * Working with arrays.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cinttypes>

// This is called a "global" variable
const char *msg = "OK";

int main() {
  // msg is created in the data segment
  // Compare the address with those on the stack
  printf("msg = %p\n", msg);

  // Array with 6 characters (including the nul at the end)
  char s1[] = "hello";

  // Pointer to the const char * array
  const char *s2 = "hi";

  // Array and pointer both behave similarly
  printf("s1[0] = %c, s2[0] = %c\n", s1[0], s2[0]);
  printf("s1 = %s, s2 = %s\n", s1, s2);

  // s3 is created on the stack (it's an "automatic" variable)
  char *s3 = s1;
  printf("s1 = %p, &s1 = %p\n", s1, &s1);
  printf("s3 = %p, &s3 = %p\n", s3, &s3);

  // Allocates new memory of 16 bytes, created on the heap
  // s4 itself is on the stack
  char *s4 = new char[0x10];

  // Allocates new memory of 16 x 4 = 64 bytes
  // Guaranteed to be initialized with 0 because of the extra () at the end
  uint32_t *ip1 = new uint32_t[0x10]();

  // Don't forget the []
  delete [] ip1;
}
