/**
 * Stack implementation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "stack.h"

Stack::Stack() : _head(nullptr) {
}

// push pushes given value onto stack
void Stack::push(double v) {
  Node *np = new Node(v);
  np->_next = _head;
  _head = np;
}

// pop pops (deletes and returns) value from stack
// Returns 0 if empty (typically throws an "exception")
double Stack::pop() {
  if (_head == nullptr) {
    return 0;
  }
  Node *oh = _head;  // Need to grab this before updating _head
  double ohv = oh->_value;  // Need to also grab value for returning
  _head = _head->_next;
  delete oh;
  return ohv;
}

// clear deletes all the values from stack
void Stack::clear() {
  // TODO(You)
}
