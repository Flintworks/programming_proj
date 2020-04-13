#include <stdio.h>
#define SIZE 1000

int gtline(char line[], int length);
void copy( char to[], char from[]); 

int main()
{
  int len, max;
  char line[SIZE];
  char longest[SIZE];
  
  while((len = gtline(line, SIZE)) > 0)
    if(len > 80)
        {   
          max += len; 
          copy(longest, line);                 
        }

 if (max > 0)
  {
  printf("longest line is %d: %s", max, longest);
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
  //s[i] = '\0';
  return i; 
}

void copy(char to[], char from[])
{
 static int i =0;
 int n= 0;

 while((to[i] = from[n]) != '\n')
  {
    ++i;
    ++n;
  }
  to[++i] = '\n';
}

