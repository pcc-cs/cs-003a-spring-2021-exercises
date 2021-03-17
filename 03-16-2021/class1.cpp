/**
 * Friends.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cmath>

class Complex {
 private:
  double _real;
  double _imaginary;

  // Recommended location (inside private)
  // The function signature must match exactly
  // Don't use it unless you MUST
  friend void dump(const Complex &);

 public:
  Complex() : _real(0), _imaginary(0) {
  }

  Complex(double real, double imaginary) : _real(real), _imaginary(imaginary) {
  }

  void add(const Complex &c) {
    _real += c._real;
    _imaginary += c._imaginary;
  }
};

void dump(const Complex &c) {
  printf("[%.1lf, %.1lf]\n", c._real, c._imaginary);
}

int main() {
  // Calling the different "methods"
  Complex c1(2.0, 3.0);
  dump(c1);

  Complex c2 = {1.0, 4.0};
  dump(c2);

  c1.add(c2);
  dump(c1);
}
