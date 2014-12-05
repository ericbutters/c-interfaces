#include "manager.h"
#include "common.h"

int main () {
  struct interface_c *myint;
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
  printf("Exit with error \n");
  return 0;;
}
