#include "rangecheck/rangecheck.hpp"

#include <iostream>

int main(int argc, char **argv) {
  if (isPositive(42) != true && isPositive(-11) != false)
  {
    std::cout << "test rangecheck failed" << std::endl;
  }
  return 0;
}

