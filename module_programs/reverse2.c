#include <stdio.h>
#include <ctype.h>

int collect(char *s); 
void reverse(char *s, int c);

int main()
{
  char s[100];
  int c=0;


  printf("Enter string \n");
  
  c=collect(s);
  printf("%i", c);
  
  reverse(s,c); 

}

int collect(char *s)
{
  int i, count=0;
  for(i=0;(s[i]=getchar()) != '\n'; i++)
    {
        count++;
    }
   return count;


} 

char d[100];

void reverse(char *s, int c)
{
  int i;

  for(i=0; c>=0;)
    {
      d[i++]=s[c--];
      printf("%s\n", d);
    }
  printf("\n reverse: %s \n", d);
}




