/**
 * Virtual destructors.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <string>  // Always include what you access

namespace {
  unsigned int gid = 0;
}

class Person {
 protected:
  unsigned int _id = ++gid;

 public:
  // "Virtual destructor"
  // Always make destructors virtual to be sure
  virtual ~Person() {
    std::cout << "~Person: " << _id << std::endl;
  }
  unsigned int id() const {
    return _id;
  }
};

class Student : public Person {
 public:
  ~Student() {
    std::cout << "~Student: " << _id << std::endl;
  }
};

// Imagine an external function that processes and discards
// Destructor is virtual, so both derived and base class instances get freed
void process(const Person *pp) {
  std::cout << "Processed " << pp->id() << std::endl;
  // Deletes both the Student and Person instances
  delete pp;
}

int main() {
  // "Automatic" variables
  Person *p1p = new Student();
  delete p1p;

  // You can't delete/free Student instance because you don't know
  // when process() will handle it, you need to let that free it
  Student *s2p = new Student();
  process(s2p);
}
