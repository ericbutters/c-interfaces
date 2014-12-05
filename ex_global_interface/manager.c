#include "manager.h"
#include "common.h"
#include <stdio.h>

int mgr_setInterface(enum INTERFACE i){
  int err = 0;
  iSayHello = NULL;
  FTAG("IMGR")
  switch (i) {
#ifdef INTERFACE_A    
    case INT_A:
      iSayHello = &sayHello_A;
      break;
#endif
#ifdef INTERFACE_B      
    case INT_B:
      iSayHello = &sayHello_B;
      break;
#endif      
    default:
      break;
  }
  err = (iSayHello==NULL)?1:0;
  if(err)
    printf("IMGR: interface not available (%d) \n", err);

  return err;
}
