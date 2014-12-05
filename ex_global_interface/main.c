#include "manager.h"
#include "common.h"

int main () {
  FTAG("MAIN")
  if(mgr_setInterface(INT_A))
    goto error_1;
  iSayHello();
  if(mgr_setInterface(INT_B))
    goto error_1;
  iSayHello();
  return 1;

error_1:
  printf("MAIN: Error, exit with 0 \n");
  return 0;
}
