#ifndef _MANAGER_H
#define _MANAGER_H
#include "interface.h"
#include "interface_a.h"
#include "interface_b.h"
#include "interface_cb.h"
#include "common.h"

enum INTERFACE {
  INT_A = 0,
  INT_B
};

struct interface_c* mgr_getInterface(enum INTERFACE i);
void mgr_setCb();
#endif
