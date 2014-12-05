#include "manager.h"
#include "common.h"
#include <stdio.h>

struct interface_c* mgr_getInterface(enum INTERFACE i){
  int err = 0;
  FTAG("IMGR")
  switch (i) {
#ifdef INTERFACE_A
    case INT_A:
      return &inta;
      break;
#endif
#ifdef INTERFACE_B      
    case INT_B:
      return &intb;
      break;
#endif      
    default:
      break;
  }

  return NULL; //error
}
