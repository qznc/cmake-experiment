#include "sub/sub.hpp"
#include "rangecheck/rangecheck.hpp"

int sub2(int x)
{
  if (!isPositive(x))
    return 0;
  return x - 2;
}
