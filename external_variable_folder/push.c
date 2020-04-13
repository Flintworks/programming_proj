#include <stdio.h>
#include "head.h"

//void push(double f);

#define MAXVAL 100 // maximum depth of val stack
int sp = 0;         //next free stack position
double val[MAXVAL];   // value stack


void push(double f)
{
  if(sp < MAXVAL)
     val[sp++] = f;
  else
     printf("error: stack full, cant push %g\n", f);

}
