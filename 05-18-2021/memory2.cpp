/**
 * Virtual destructors.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <string>  // Always include what you access

class Person {
 private:
  std::string *_names;

 protected:
  std::string _id;

 public:
  Person(std::string id, int aliases) {
    _id = id;
    _names = new std::string[aliases];
  }
  ~Person() {
    std::cout << "~Person: " << _id << std::endl;
    delete [] _names;
  }
};

class Student : public Person {
 private:
  std::string *_courses;

 public:
  Student(std::string id, int aliases, int load) : Person(id, aliases) {
    _courses = new std::string[load];
  }
  ~Student() {
    std::cout << "~Student: " << _id << std::endl;
    delete [] _courses;
  }
};

int main() {
  // Automatically calls ~Person
  Person p1("p1", 3);
  Student s1("s1", 2, 6);
}
