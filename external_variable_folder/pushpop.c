#include <stdio.h>
#define MAXVAL 100 // maximum depth of val stack

#include "calc.h"

int sp = 0;         //next free stack position
double val[MAXVAL];   // value stack

// char val holds the stack array and only push and pop function access them not main function

// push: push f onto value stack
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, cant push %g\n", f);

}


// pop: pop and return top value from stack
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
        {
        printf("error: stack empty\n");
        return 0.0;
        }
}
