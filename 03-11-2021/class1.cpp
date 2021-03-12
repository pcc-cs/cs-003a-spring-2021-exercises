/**
 * Intro to classes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cmath>

// Note the class syntax
// Keyword "private" is optional, but highly recommended
// Class name starts with an upper case (in camel case convention)
class Complex {
 private:
  // Private member names have underscore ("_") prefix by convention
  // This is the "data" part
  double _real;
  double _imaginary;

 public:
  // "Default" constructor, required because there is another constructor
  Complex() : _real(0), _imaginary(0) {
  }

  // "Constructor" to create an "instance" of the class
  Complex(double real, double imaginary) : _real(real), _imaginary(imaginary) {
  }

  // All parameters are "automatic" and created on the "stack"
  // Member functions like this are called "methods"
  void add(const Complex &c) {
    // OK to access private members of c because it's the same class
    _real += c._real;
    _imaginary += c._imaginary;
  }

  // This is another "method"
  double value() {
    return sqrt(_real * _real + _imaginary * _imaginary);
  }

  // "Operations" on the private data, a key tenet of "informational cohesion"
  void dump() {
    printf("[%.1lf, %.1lf]\n", _real, _imaginary);
  }
};

int main() {
  // Calling the different "methods"
  Complex c1(2.0, 3.0);
  printf("c1.value() = %.1lf\n", c1.value());
  c1.dump();

  Complex c2 = {1.0, 4.0};
  printf("c2.value() = %.1lf\n", c2.value());
  c2.dump();

  c1.add(c2);
  printf("c1.value() = %.1lf\n", c1.value());
  c1.dump();
}
