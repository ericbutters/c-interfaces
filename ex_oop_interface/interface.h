#ifndef _INTERFACE_H
#define _INTERFACE_H
struct interface_c {
  char name[256];
  void (*iSayHello)(void);
};
#endif
