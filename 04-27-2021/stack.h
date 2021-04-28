/**
 * Stack declaration.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef STACK_H_
#define STACK_H_

#include "node.h"

class Stack {
 private:
  Node *_head;

 public:
  Stack();
  void push(double);
  double pop();
  void clear();
};

#endif  // STACK_H_
