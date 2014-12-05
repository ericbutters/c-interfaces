#ifndef _COMMON_H
#define _COMMON_H
#include <stdio.h>
#define FTAG(tag) \
  printf("%s: %s in line %d\n",tag,__func__,__LINE__);
#endif
