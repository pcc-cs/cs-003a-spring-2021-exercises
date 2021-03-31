/**
 * Namespaces.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <cstring>

// Only to show name clashes, do not do this in regular code
using std::string;

// "Nested" namespaces
namespace a {
namespace b {
// Rough implementation!
// Supports lengths only till 255 (16^2 -1)
class string {
 private:
  char _value[0x100];

 public:
  explicit string(const char *v) {
    // Always check for nullptr before using!
    if (v == nullptr) {
      _value[0] = '\0';
    }
    strncpy(_value, v, strlen(v));
  }
  const char *value() {
    return _value;
  }
};
}  // namespace b
}  // namespace a

int main() {
  string s1("hi");
  a::b::string s2("hello");
  printf("s1 = %s, s2 = %s\n", s1.c_str(), s2.value());
}
