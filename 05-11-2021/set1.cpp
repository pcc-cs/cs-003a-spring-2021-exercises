/**
 * Check out sets.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <set>
#include <iostream>

// count() gives number of instances of given value in set
#define IN(s, x) (s.count(x) > 0 ? "Yes" : "No")

// Don't forget return by reference
std::ostream &operator<<(std::ostream &os, const std::set<int> s) {
  os << '{';
  int i = 0;
  for (int x : s) {
    if (i++ > 0) {
      os << ", ";
    }
    os << x;
  }
  os << '}';
  return os;
}

int main() {
  std::set<int> s1 = {10, 20, 30};
  std::cout << s1 << std::endl;  // {10m 20, 30}

  std::cout << "s1 contains 10: " << IN(s1, 10) << std::endl;
  std::cout << "s1 contains 100: " << IN(s1, 100) << std::endl;

  s1.insert(40);
  std::cout << s1 << std::endl;  // {10, 20, 30, 40}

  s1.insert(40);
  std::cout << s1 << std::endl;  // {10, 20, 30, 40}

  s1.erase(10);
  std::cout << s1 << std::endl;  // {20, 30, 40}

  s1.clear();
  std::cout << s1 << std::endl;  // {}
}
