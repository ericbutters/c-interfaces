#ifndef _MANAGER_H
#define _MANAGER_H
#include "interface.h"
#include "interface_a.h"
#include "interface_b.h"
#include "common.h"

enum INTERFACE {
  INT_A = 0,
  INT_B
};

int mgr_setInterface(enum INTERFACE i);
#endif
