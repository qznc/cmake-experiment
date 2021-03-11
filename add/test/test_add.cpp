#include "add/add.hpp"

#include <iostream>

int main(int argc, char **argv) {
  if (42 != add2(40))
  {
    std::cout << "test add failed" << std::endl;
  }
  return 0;
}

