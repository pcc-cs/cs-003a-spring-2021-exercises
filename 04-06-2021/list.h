/**
 * List data structure.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef LIST_H_
#define LIST_H_

#include "node.h"

// Data structure implemented by class
class List {
 private:
  Node *_head;
  Node *_tail;

 public:
  List();
  ~List();
  void append(int);  // Add element at the end
  bool in(int);  // Returns true if in the list
};

#endif  // LIST_H_
