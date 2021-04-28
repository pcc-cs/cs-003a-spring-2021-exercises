/**
 * Node implementation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "node.h"

// Always use nullptr for null pointer values
Node::Node(double v) : _value(v), _next(nullptr) {
}
