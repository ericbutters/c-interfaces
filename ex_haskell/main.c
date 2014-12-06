#include <stdio.h>

extern void eval(int i);

int main(void)
{
  static char *argv[] = { "libEval.so", 0 }, **argv_ = argv;
  static int argc = 1;
  hs_init(&argc, &argv_);
  eval(10);
  hs_exit();
  return 0;
}
