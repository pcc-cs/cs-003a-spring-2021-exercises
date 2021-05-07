/**
 * More STL examples.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <map>
#include <iostream>

int main() {
  // You can use this like a regular array, except using strings as keys
  std::map<const char *, double> gpas = {
    {"Jimmy Neutron", 3.92},
    {"Carly Newton", 3.96},
  };
  std::cout << "Jimmy Neutron's GPA: " << gpas["Jimmy Neutron"] << std::endl;
  gpas["Jimmy Neutron"] = 3.56;
  std::cout << "Jimmy Neutron's GPA: " << gpas["Jimmy Neutron"] << std::endl;
  std::cout << std::endl;

  // Remove key
  gpas.erase("Jimmy Neutron");

  // Setting value for a non-existing key adds the key with that value
  gpas["Kim Jong"] = 2.8;

  std::cout << "All the GPAs" << std::endl;
  for (auto gpa : gpas) {
    std::cout << gpa.first << "'s GPA: " << gpa.second << std::endl;
  }
}
