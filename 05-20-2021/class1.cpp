/**
 * Class inheritance, copy constructor, and destructors.
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
  // "Copy constructor" - note the const and the &
  Person(const Person &p) {
    std::cout << "Person copy constructor" << std::endl;
    _names = nullptr;
    _id = p._id + " copy";
  }
  Person(std::string id, int aliases) {
    _id = id;
    _names = new std::string[aliases];
  }
  ~Person() {
    std::cout << "~Person: " << _id << std::endl;
    if (_names != nullptr) {
      delete [] _names;
    }
    _names = nullptr;
  }
  virtual std::string who() {
    return "Person";
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
    if (_courses != nullptr) {
      delete [] _courses;
    }
    _courses = nullptr;
  }
  // This "overrides" Person::who()
  std::string who() {
    return "Student";
  }
};

int main() {
  // Automatically calls ~Person
  // Demonstrates "redifinition"
  Person p1("p1", 3);
  Student s1("s1", 2, 6);
  std::cout << "p1.who() = " << p1.who() << std::endl;
  std::cout << "s1.who() = " << s1.who() << std::endl;

  // Makes a copy to Person
  // Person (no polymorphism)
  // Copy constructor invoked
  Person p2 = s1;
  std::cout << "p2.who() = " << p2.who() << std::endl;

  // Assign address to Person pointer (does NOT copy the full object)
  // Student (polymorphism)
  // Copy constructor NOT invoked here
  Person *p3p = &s1;
  std::cout << "p3p->who() = " << p3p->who() << std::endl;

  // Create by reference
  // Student (polymorphism)
  // Copy constructor NOT invoked here as well
  Person &p4 = s1;
  std::cout << "p4.who() = " << p4.who() << std::endl;
}
