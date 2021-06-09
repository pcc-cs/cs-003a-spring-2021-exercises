/**
 * Lambda for sorting.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <vector>
#include <iostream>
#include <algorithm>

struct Student {
 public:
  int id;
};

int main() {
  std::vector<Student> sv = {
    {457}, {102}, {294}
  };
  std::sort(sv.begin(), sv.end(), [](const Student &s1, const Student &s2) {
    return s1.id < s2.id;
  });
  for (const Student &s : sv) {
    std::cout << s.id << std::endl;
  }
}
