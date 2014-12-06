#ifndef _COMMON_H
#define _COMMON_H
#include <stdio.h>
#define FTAG(tag) \
  printf("%s: %s in line %d\n",tag,__func__,__LINE__);
#define FTAG_C_ORANGE(tag) \
  printf("\e[1;36m%s: %s in line %d\e[m\n",tag,__func__,__LINE__);
#define FTAG_C_BLUE(tag) \
  printf("\e[1;34m%s: %s in line %d\e[m\n",tag,__func__,__LINE__);
#endif
