#include "interface_b.h"
#include "common.h"

struct interface_c intb = {
  .name = "intb_", 
  .iSayHello = &sayHello_B
};

void sayHello_B(void){
  FTAG("INTB");
  return;
}
