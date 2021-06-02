/**
 * Iterators.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <vector>
#include <iostream>

class Whatever {
 private:
  int _x;

 public:
  explicit Whatever(int x) : _x(x) {
  }
  int operator*() {
    return _x;
  }
};

int main() {
  // Mimic * using operator overloading
  Whatever w1(100);
  std::cout << "*w1 = " << *w1 << std::endl;

  std::vector<int> v1 = {10, -5, 21, 100};

  // First element
  auto first = v1.begin();  // This is an iterator, NOT a pointer
  std::cout << "First: " << *first << std::endl;  // But behaves like a pointer

  // Notice that we go through iterators by incrementing (it++)
  for (auto it = v1.begin(); it != v1.end(); it++) {
    std::cout << *it << std::endl;
  }

  // You can also do regular arithmetic
  auto third = first + 2;
  std::cout << "Third: " << *third << std::endl;
}
