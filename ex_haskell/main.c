#include <stdio.h>
#include <time.h>

extern int eval(int i);

int eval_local(int i){
  printf("Hello C from .LOCAL.\n");
  return i+1;
}

int main(void)
{
  struct timespec ts = {0,0};
  struct timespec te = {0,0};
  static char *argv[] = { "libEval.so", 0 }, **argv_ = argv;
  static int argc = 1;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  hs_init(&argc, &argv_);
  clock_gettime(CLOCK_MONOTONIC, &te);
  unsigned int msec = (te.tv_sec-ts.tv_sec)*1000*1000 + (te.tv_nsec-ts.tv_nsec)/(1000);
  printf("%s: hs_init took %dms \n",__func__,msec);
  clock_gettime(CLOCK_MONOTONIC, &ts);
  int ret = eval(10);
  clock_gettime(CLOCK_MONOTONIC, &te);
  msec = (te.tv_sec-ts.tv_sec)*1000*1000 + (te.tv_nsec-ts.tv_nsec)/(1000);
  printf("%s: haskell calc took %dms \n",__func__,msec);
  printf("Haskell returned with INT(%d) \n",ret);
  clock_gettime(CLOCK_MONOTONIC, &ts);
  ret = eval_local(ret);
  clock_gettime(CLOCK_MONOTONIC, &te);
  msec = (te.tv_sec-ts.tv_sec)*1000*1000 + (te.tv_nsec-ts.tv_nsec)/(1000);
  printf("%s: .local. calc took %dms \n",__func__,msec);

  printf(".LOCAL. returned with INT(%d) \n",ret);
  hs_exit();
  return 0;
}
