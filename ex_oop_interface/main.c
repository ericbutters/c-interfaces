#include "manager.h"
#include "common.h"

void main_cb(struct interface_c *mgrcb) {
  printf("\e[1;31m%s: got mgr callback, set interface to %s\e[m\n",__func__,mgrcb->name);;
}

int main () {
  struct interface_c *myint;
  mgr_setCb(&main_cb);
  myint = mgr_getInterface(INT_B);
  if(NULL == myint)
    goto error;

  myint->iSayHello();

  myint = mgr_getInterface(INT_A);
  if(NULL == myint)
    goto error;

  myint->iSayHello();

  return 1;
  
error:
  printf("Could not find interface. Exit with error \n");
  return 0;;
}
