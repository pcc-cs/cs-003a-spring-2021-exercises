/**
 * Node declaration.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef NODE_H_
#define NODE_H_

// Note the recursive use of the Node type
class Node {
 private:
  double _value;
  Node *_next;
  explicit Node(double);
  friend class Stack;
};

#endif  // NODE_H_
