/**
 * Array of classes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

// Constants, note the upper case
#define COUNT 0x100
#define REAL 0.3
#define IMAGINARY -0.7

// "Macro" handled by the "preprocessor"
// Substitute for function when the logic is simple
// Never forget the parantheses
#define SIZE(a) (sizeof(a) / sizeof(a[0]))

class Complex {
 private:
  double _real, _imaginary;

 public:
  Complex() : _real(0), _imaginary(0) {
  }
  Complex(double r, double i) : _real(r), _imaginary(i) {
  }
  void dump() const {
    printf("[%.2lf, %.2lf]\n", _real, _imaginary);
  }
};

int main() {
  // Instantiate one
  Complex c1(REAL, IMAGINARY);

  // Array of integers
  int ia1[] = {
    10,
    200,
    -2,
  };
  printf("Length of ia1 = %lu\n", SIZE(ia1));  // Using macro to get size

  // Array of classes (not an std::vector class), initialized
  Complex ca1[] = {
    Complex(2, 4),
    Complex(-2, 0.7),
    Complex(1.2, 2.6),
  };

  // Iterate over the complex values in array
  // Note the const, &, and : below
  // Scope of "c" is only within the loop
  for (const Complex &c : ca1) {
    c.dump();
  }

  // Traditional way of iterating
  for (int i = 0; i < SIZE(ca1); i++) {
    ca1[i].dump();
  }

  // Pointer to array of Complex with default values
  Complex *ca2 = new Complex[COUNT];

  // Array of Complex with default values
  Complex ca3[COUNT];
  printf("Length of ca3 = %lu\n", SIZE(ca3));

  // Clean up
  delete [] ca2;
}
