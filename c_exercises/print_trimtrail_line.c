#include <stdio.h>
#define SIZE 100

int gtline(char line[], int length);
int trimline(char x[]); 

int main()
{ int len = 0;
  int tr = 0;
  char line[SIZE];
  
  while((len=gtline(line, SIZE)) > 0)
        {   
          if((tr = trimline(line)) > 0)                 
             {printf("Printed line:%s", line);}
        }

 return 0; 

}

int gtline(char s[], int lim)
{
  int t,i;
  for(i=0;i<lim-1 && (t = getchar()) != '\n' && t != EOF; ++i)
     {
        s[i] = t;  
        
     }
  if(t == '\n')
     {
        s[i] = t;
        ++i;       
     }
  s[i] = '\0';
  return i; 
}

int trimline(char x[])
{
  int i;
  for(i=0;x[i]!='\n';i++)
      {  ;   }
  --i;

  for(i>0;(x[i] == ' ') || (x[i] == '\t');--i)
    {
        ;
    }

  if(i>=0)
   {
    ++i;
    x[i] = '\n';
    ++i;
    x[i] = '\0';
   }

  return i;


}

