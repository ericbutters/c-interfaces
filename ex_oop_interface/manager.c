#include "manager.h"
#include "common.h"
#include <stdio.h>

void mgr_setCb(void *cb) {
  mgr_callback = cb; 
}

struct interface_c* mgr_getInterface(enum INTERFACE i){
  int err = 0;
  struct interface_c *tmp_i;
  FTAG("IMGR")
  switch (i) {
#ifdef INTERFACE_A
    case INT_A:
      tmp_i = &inta;
      break;
#endif
#ifdef INTERFACE_B      
    case INT_B:
      tmp_i = &intb;
      break;
#endif      
    default:
      return NULL; //error
      break;
  }
  mgr_callback(tmp_i);
  return tmp_i;
}
