CC = gcc

INCLUDES += -I../common

ifeq ($(INTERFACE_A),1)
src += interface_a.c
def += -DINTERFACE_A
endif
ifeq ($(INTERFACE_B),1)
src += interface_b.c
def += -DINTERFACE_B
endif
all:
	$(CC) -o ex_global_interface main.c manager.c $(src) $(def) $(INCLUDES)

