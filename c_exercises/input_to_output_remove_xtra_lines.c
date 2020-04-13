#include <stdio.h>


int main()
{
 int n[30], c, a, bc;
 a = 0;
 bc = 0;
 
 while((c = getchar()) != EOF)
    {
        n[a] = c;
        if( a == 0)
        {
          putchar(n[a]);

        }

       else if( a != 0)
         {
           if(n[a] == ' ' && n[a-1] == ' ')
              {
                  ;
              }
           else
                putchar(n[a]);
        }
        a++;
        
    }


}
