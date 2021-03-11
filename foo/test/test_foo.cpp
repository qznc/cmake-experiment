#include "foo/foo.hpp"

#include <iostream>

int main(int argc, char **argv) {
  std::cout << "test foo "
    << (42 == foo() ? "succeeded" : "failed")
    << std::endl;
  return 0;
}

