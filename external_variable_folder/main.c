#include <stdio.h>
#include <stdlib.h> // for atof()

#include "calc.h"

#define MAXOP 100 // max size of operand or operator
//#define NUMBER '0' // signal that a number was found

int getop(char []);
void push(double);
double pop(void);

// reverse Polish calculator
int main()
{
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF) // getop will return NUMBER if digit/s found. Input values will be stacked in char s[MAXOP]
    {
        switch (type) {
        case NUMBER:    //type value is 0
            push(atof(s)); //atof converts string input to double type digits. array s[] contains the collected digits in getop. the values of the elements in array s[] will become a single value element upon push. 
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");
            break;
        case '%':
            op2 = pop();
            if (op2 != 0.0)
                push((int)pop() % (int)op2); //convert operand to a value type ex. (int)op2
            else
                printf("error: zero divisor\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop()); //in the array the index that contains the result of the two operands will be displayed and removed. not necessarily the 1st element val[0].
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }

    }
    return 0;

} 
