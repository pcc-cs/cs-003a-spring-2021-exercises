/**
 * List implementation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "node.h"
#include "list.h"

List::List() : _head(nullptr), _tail(nullptr) {
}

List::~List() {
  // Must check for null, also do NOT do a np = np->next in loop header
  for (Node *np = _head; np != nullptr;) {
    Node *cnp = np;  // Copy so we can delete later
    np = np->_next;  // OK because we know np is not null
    delete cnp;  // OK because cnp is not referenced anymore
  }
}

// append(int) adds given value to end of list
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

// in() looks for given value, return true/false
bool List::in(int v) {
  // Iteration following the pointers
  for (Node *np = _head; np != nullptr; np = np->_next) {
    if (np->_value == v) {
      return true;
    }
  }
  return false;
}

// insert() inserts given value v after the first node whose value is n.
// If list is empty, add to list
// If n is not found, add at the end
void List::insert(int n, int v) {
  // Sad/happy path constructs make code easy to read, have less nesting
  // List is empty
  if (_head == nullptr) {
    append(v);
    return;
  }

  // "Precondition": _head is NOT null
  // We also know from the list logic that _tail is also not null

  // Found the value in the list
  Node *nnp = new Node(v);
  for (Node *np = _head; np != nullptr; np = np->_next) {
    if (np->_value == n) {
      nnp->_next = np->_next;  // Safe because we checked np != null
      np->_next = nnp;
      if (np == _tail) {
        _tail = _tail->_next;
      }
      return;
    }
  }

  // Did not find the values
  _tail->_next = nnp;  // Safe because we know _tail != null
  _tail = _tail->_next;  // Don't forget this!
}

// dump() displays all the elements in list
void List::dump() {
  for (Node *np = _head; np != nullptr; np = np->_next) {
    if (np != _head) {
      printf("->");
    }
    printf("%d", np->_value);
  }
  printf("\n");
}
