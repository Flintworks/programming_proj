#include <stdio.h>

/* count blanks, tabs, newline */

int main()
{
  int c, nc, bc, tc;
  
  nc = 0;
  bc = 0;
  tc = 0;

    while((c = getchar()) != EOF)
        {
            if (c == ' ')
                ++bc;
            else if(c == '\t')
                ++tc;
            else if ( c == '\n')
                ++nc;       
        }
    printf(" blanks: %d, tabs: %d, newline: %d \n", bc, tc, nc);


}
