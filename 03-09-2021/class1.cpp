/**
 * Intro to classes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

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

  // "Operations" on the private data, a key tenet of "informational cohesion"
  void dump() {
    printf("[%.1lf, %.1lf]\n", _real, _imaginary);
  }
};

int main() {
  // "Instantiation" of the class
  Complex c1(2.0, 3.0);
  Complex c2 = {1.0, 4.0};
  Complex *c3p = new Complex(3.0, 2.0);  // Dynamic allocation, returns pointer
  c1.dump();
  c2.dump();
  c3p->dump();  // Note the -> notation for pointer

  // Using the default constructor
  Complex c4;  // NOT Complex c4();
  c4.dump();

  // Always delete allocated memory!
  // Remember C++ is NOT "garbage collected"
  delete c3p;
}
