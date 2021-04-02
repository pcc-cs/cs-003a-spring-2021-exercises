/**
 * Namespaces. This is a concocted example to show how you can use
 * the same name in different namespaces without name clash.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

// First Color
enum Color {
  RED, GREEN, BLUE
};

// "Nested" namespaces
// Color here has nothing to do with Color above
namespace a {
  // Second Color
  enum Color {
    RED, GREEN, BLUE
  };
  namespace b {
    // Third Color
    enum Color {
      RED, GREEN, BLUE
    };
  }  // namespace b
}  // namespace a

int main() {
  // Need namespace qualifier for BLUE because this is "enum class"
  Color c1 = Color::BLUE;

  // Color in first namespace
  a::Color c2 = a::Color::RED;

  // Color in second namespace
  a::b::Color c3 = a::b::Color::GREEN;

  std::cout << c1 << ", " << c2 << ", " << c3 << std::endl;
}
