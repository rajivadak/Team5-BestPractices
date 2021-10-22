
#ifndef __HEADER_H__
#define __HEADER_H__

#include <stdio.h>

typedef int (*arithFuncPtr)(int, int);

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

#endif 
