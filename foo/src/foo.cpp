#include "foo/foo.hpp"
#include "add/add.hpp"
#include "sub/sub.hpp"

int foo(void)
{
  return add2(sub2(42));
}
