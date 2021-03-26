/**
 * Complex class, containing "definitions" of the class.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "complex.h"

Complex::Complex() : _real(0), _imaginary(0) {
}

Complex::Complex(double r, double i) : _real(r), _imaginary(i) {
}

Complex Complex::conjugate() {
  return Complex(_real, -_imaginary);
}

void Complex::dump() const {
  printf("[%.2lf, %.2lf]\n", _real, _imaginary);
}
