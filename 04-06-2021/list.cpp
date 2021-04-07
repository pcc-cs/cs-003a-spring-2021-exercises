/**
 * List implementation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "node.h"
#include "list.h"

List::List() : _head(nullptr), _tail(nullptr) {
}

List::~List() {
  // TODO(Sekhar): deallocate nodes
}

void List::append(int v) {
  // Created on the heap, will exist after function returns
  // Never use an "automatic" variable!
  Node *np = new Node(v);

  // Always check for null, here list is empty
  // Don't forget assigning to both head and tail
  if (_head == nullptr) {
    _head = _tail = np;
    return;
  }

  // Not empty, means neither head nor tail can be null
  _tail->_next = np;
  _tail = _tail->_next;
}

bool List::in(int v) {
  // Iteration following the pointers
  for (Node *np = _head; np != nullptr; np = np->_next) {
    if (np->_value == v) {
      return true;
    }
  }
  return false;
}
