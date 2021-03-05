/**
 * Structs.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cinttypes>
#include <string>
#include <iostream>

// "struct" is the keyword, followed by the struct "tag" Student
struct Student {
  // These are "member" variables, all "public"
  uint64_t id;
  std::string firstName;
  std::string lastName;
};

// Passing by reference to prevent unnecessary creation and copy
void dump(const Student &s) {
  std::cout << s.id << ": " << s.firstName << " " << s.lastName << std::endl;
}

int main() {
  // Note that you can use "Student" name as type without the "struct" keyword
  // "Student" is the type, "s1" is an "instance" of that type
  Student s1;  // Creates a Student "instance" with space allocated
  s1.id = 45322123;  // Assigning using the "dot" notation
  s1.firstName = "Jimmy";
  s1.lastName = "Neutron";
  dump(s1);

  // Directly create with values
  Student s2 = {78433216, "Lisa", "Connolly"};
  dump(s2);

  Student *s1p = &s1;
  // Uses "arrow" notation, same effect as s1.lastName = "Hoffa"
  s1p->lastName = "Hoffa";
  dump(s1);

  // Note the different addresses
  std::cout <<
    &s1 << ", " <<
    &(s1.id) << ", " <<
    &(s1.firstName) << ", " <<
    &(s1.lastName) << std::endl;
}
