#include <stdio.h>
#include <stdlib.h> // for atof()
#include <ctype.h> //isdigit()

#define MAXOP 100 // max size of operand or operator
#define NUMBER '0' // signal that a number was found

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

#define MAXVAL 100 // maximum depth of val stack

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


int getch(void);
void ungetch(int);

// getop: get next operator or numeric operand
int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c!= '.')
        return c; /* not a number */
    i = 0;
    if (isdigit(c)) /*collect integer part */
        while (isdigit(s[++i] = c = getch())) 
            ;
    if (c == '.') // collect fraction part
        while (isdigit(s[++i] = c = getch())) 
            ;
    s[i] = '\0';
    if ( c != EOF)
        ungetch(c);
    return NUMBER;  

}


#define BUFSIZE 100

char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0; // next free position in buf

int getch(void) /* get a (possibly push back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}


void ungetch (int c) /* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}




