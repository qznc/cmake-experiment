#include "add/add.hpp"
#include "rangecheck/rangecheck.hpp"

int add2(int x)
{
  if (!isPositive(x))
    return 0;
  return x + 2;
}
