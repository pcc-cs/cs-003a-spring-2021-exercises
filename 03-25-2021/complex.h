/**
 * Complex class, containing "declarations" of the class.
 * Specifies the "interface" of the class.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

// Always use these "header guards"
#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <cstdio>

// Only "declarations"
class Complex {
 private:
  double _real, _imaginary;

 public:
  Complex();
  Complex(double, double);
  Complex conjugate();
  void dump() const;
};

#endif  // COMPLEX_H_
