#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
 int c, state;

    while((c = getchar()) != EOF)
    {
        if( c == ' ' || c == '\t' || c == '\n')
           {state = OUT;
           putchar('\n');}
        else if(state == IN)
            putchar(c);

        else if (state == OUT)
            {state = IN;
            putchar(c);}  

    }   


}
