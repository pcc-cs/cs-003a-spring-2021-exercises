/**
 * Exceptions using class hierarchy.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <string>
#include <vector>

class Error {
 public:
  virtual std::string what() {
    return "generic error";
  }
};

class NumError : public Error {
 private:
  std::string _e;

 public:
  explicit NumError(std::string e) : _e(e) {
  }
  std::string what() {
    return _e;
  }
};

void a(int *xp) {
  if (xp == nullptr) {
    throw Error();
  }
  if (*xp < 0) {
    throw NumError("should be non-negative");
  }
  if (*xp > 100) {
    throw NumError("too large");
  }
  std::cout << "Number " << *xp << " is good!" << std::endl;
}

int main() {
  int x = -1;
  std::vector<int *> ipv = {nullptr, &x};

  // Catch base and derived class errors separately
  // You must have NumError first!
  for (int *xp : ipv) {
    try {
      a(xp);
    } catch (NumError e) {
      std::cout << "Error: " << e.what() << std::endl;
    } catch (Error e) {
      std::cout << "Error: " << e.what() << std::endl;
    }
  }

  // Using polymorphism to invoke the right what()
  while (std::cin >> x) {
    try {
      a(&x);
    } catch (Error &e) {
      std::cout << "Error: " << e.what() << std::endl;
    }
  }
}
