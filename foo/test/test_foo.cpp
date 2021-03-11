#include "foo/foo.hpp"

#include <iostream>

int main(int argc, char **argv) {
  if (42 != foo())
  {
    std::cout << "test foo failed" << std::endl;
  }
  return 0;
}

