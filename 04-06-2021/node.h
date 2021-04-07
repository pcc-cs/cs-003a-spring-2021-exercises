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
  int _value;
  Node *_next;
  friend class List;
  explicit Node(int);
};

#endif  // NODE_H_
