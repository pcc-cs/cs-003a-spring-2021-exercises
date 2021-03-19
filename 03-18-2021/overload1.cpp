/**
 * Operator overloading.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <iostream>

class Complex {
 private:
  double _real;
  double _imaginary;

  // The prototypes must match EXACTLY (param names are optional)
  friend Complex operator*(const Complex &, const Complex &);
  friend std::ostream &operator<<(std::ostream &os, const Complex &c);

 public:
  Complex(double real, double imaginary) : _real(real), _imaginary(imaginary) {
  }

  // sum adds the instance with incoming value and returns it
  Complex sum(const Complex &c) {
    return Complex(_real + c._real, _imaginary + c._imaginary);
  }

  // Operator overloading of the "+" operator
  // Note the two "const" keywords
  // First "const" ensures the function doesn't change c
  // Second "const" ensures it doesn't change this instance
  Complex operator+(const Complex &c) const {
    return Complex(_real + c._real, _imaginary + c._imaginary);
  }

  void dump() {
    printf("[%.1lf, %.1lf]\n", _real, _imaginary);
  }
};

// Operator overloading using an external function (NOT a method)
// Never do this, always place this inside the class
// Only doing this as intro to the operator<<() below
// You should NOT return by reference here!
Complex operator*(const Complex &c1, const Complex &c2) {
  double r = c1._real * c2._real - c1._imaginary * c2._imaginary;
  double i = c1._real * c2._imaginary + c1._imaginary * c2._real;
  return Complex(r, i);
}

// Note that we cannot take in os as const because << will change its value
// MUST return by reference
std::ostream &operator<<(std::ostream &os, const Complex &c) {
  return os << "[" << c._real << ", " << c._imaginary << "]";
}

int main() {
  Complex c1(2.1, 3.3);
  c1.dump();
  Complex c2(2.1, -3.3);
  c2.dump();

  // Feels concocted, not natural
  Complex c3 = c1.sum(c2);
  c3.dump();

  // Use operator overloading to make it an ADT (Abstract Data Type)
  // Also a more intuitive way to print, using regular std::cout
  Complex c4 = c1 + c2;  // operator+()

  // Using external function operator*()
  Complex c5 = c1 * c2;
  c5.dump();

  // a << b is as if you're calling a.operator<<(b)
  std::cout << c5 << std::endl;  // operator<<()
}
