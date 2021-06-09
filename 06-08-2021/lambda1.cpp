/**
 * Lambda functions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

int sum1(int a, int b) {
  return a + b;
}

int main() {
  int a = 10, b = 20;
  // Using regular function
  std::cout << "sum = " << sum1(a, b) << std::endl;

  // Using lambda function
  auto sum2 = [](int a, int b) {
    return a + b;
  };
  std::cout << "sum of a and b = " << sum2(a, b) << std::endl;

  // Here, sf value will remain at 10 for the lambda
  // To make it change, use [&sf] instead
  int sf = 10;
  auto scale = [sf](int x) {
    return sf * x;
  };
  sf = 20;
  std::cout << "scaled value of a = " << scale(a) << std::endl;

  std::cout << "half of a = " << [](int a) {
    return a / 2;
  }(a) << std::endl;
}
