/**
 * Check out C++.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cstring>

int main() {
  const char *s1 = "Hello";
  const char *s2 = "!";

  // Allocates 256 bytes, zero'd by the () at the end
  char *s3 = new char[0x100]();
  printf("s3 = '%s'\n", s3);
  strncat(s3, s1, strlen(s1));
  printf("s3 = '%s'\n", s3);
  strncat(s3, s2, strlen(s2));
  printf("s3 = '%s'\n", s3);
}
