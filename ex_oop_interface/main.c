#include "manager.h"
#include "common.h"

void main_cb(struct interface_c *mgrcb) {
  FTAG("MCBK")
  printf("%s: got mgr callback, set interface to %s\n",__func__,mgrcb->name);;
}

int main () {
  struct interface_c *myint;
  mgr_setCb(&main_cb);
  myint = mgr_getInterface(INT_B);
  if(NULL == myint)
    goto error;

  printf("%s: myint -> name is %s \n",__func__,myint->name);
  myint->iSayHello();
  myint = mgr_getInterface(INT_A);
  if(NULL == myint)
    goto error;

  printf("%s: myint -> name is %s \n",__func__,myint->name);
  myint->iSayHello();

  return 1;
  
error:
  printf("Could not find interface. Exit with error \n");
  return 0;;
}
