#include "interface_a.h"
#include "common.h"

struct interface_c inta = {
  .name = "inta_", 
  .iSayHello = &sayHello_A
};

void sayHello_A(void){
  FTAG("INTA");
  return;
}
