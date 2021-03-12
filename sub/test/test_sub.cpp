#include "sub/sub.hpp"

#include <iostream>

int main(int argc, char **argv) {
  if (42 != sub2(44))
  {
    std::cout << "test sub failed" << std::endl;
  }
  return 0;
}

