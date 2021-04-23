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
  void init(int[], int);
  void append(int);
  bool in(int);
  void insert(int, int);
  bool remove(int);
  void dump();
};

#endif  // LIST_H_
