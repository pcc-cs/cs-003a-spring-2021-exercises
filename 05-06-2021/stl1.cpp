/**
 * STL examples.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <vector>
#include <iostream>
#include <algorithm>

bool compare(double d1, double d2) {
  return d1 < d2;
}

int main() {
  // Array, size cannot be changed
  // Contiguous
  double a1[] = {-20, 100, 1, 25};
  std::cout << "a1[2] = " << a1[2] << std::endl;
  std::cout << std::endl;

  // Vector, size can be changed
  // Contiguous
  std::vector<double> v1 = {-20, 100, 1, 25};
  std::cout << "v1.size() = " << v1.size() << std::endl;
  std::cout << "v1.capacity() = " << v1.capacity() << std::endl;
  std::cout << "v1 last element = " << v1[v1.size() - 1] << std::endl;
  v1.push_back(10);  // Can be done in amortized O(1) time
  std::cout << "v1.size() = " << v1.size() << std::endl;
  std::cout << "v1.capacity() = " << v1.capacity() << std::endl;
  std::cout << "v1 last element = " << v1[v1.size() - 1] << std::endl;

  // Sort
  std::sort(v1.begin(), v1.end(), compare);
  std::cout << "v1 last element = " << v1[v1.size() - 1] << std::endl;
}
