/**
 * Check out C++.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

// Don't using namespace std

int main() {
  std::string message;
  // Echo input messages till EOF (End of File)
  while (std::cin >> message) {
    std::cout << message << std::endl;
  }
}
