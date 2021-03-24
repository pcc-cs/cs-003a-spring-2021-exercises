/**
 * Destructors.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

#define COUNT 2

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

class List {
 private:
  int _size = 0;  // Initializes to 0 for ALL instances by default
  int _max;
  Complex *_values;

 public:
  // Any time you allocate memory, you must delete it somewhere
  // This is ooften in destructor
  explicit List(int n) : _max(n), _values(new Complex[n]) {
  }
  // Typical purpose of this "destructor" is to clean up resources, like memory
  ~List() {
    printf("~List() called, deleting memory...\n");
    delete [] _values;
  }
  void add(Complex c) {
    // "Sad" path
    if (_size == _max) {
      return;
    }

    // "Happy" path
    // ++ works here because is a "post" operation
    _values[_size++] = c;
  }
  Complex *values() {
    return _values;
  }
};

int main() {
  List l1(COUNT);
  l1.add(Complex(3, 2));
  l1.add(Complex(-1.1, 0.5));
  l1.add(Complex(5.2, -6.1));  // Does NOT get added because list is full

  // "auto" keyword figures out the type at compile time
  // Could have also defined this as Complex *values = l1.values()
  // Always assign results of function calls to local variable (for efficiency)
  auto values = l1.values();
  for (int i = 0; i < COUNT; i++) {
    values[i].dump();
  }
}
