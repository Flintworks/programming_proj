#include <stdio.h>
#define SIZE 100

int gtline(char line[], int length);
void reverse(char line[], char rev[], int length);
//void copy( char to[], char from[]); 

int main()
{
  int len, max;
  char line[SIZE];
  char enil[SIZE];
  
  while((len = gtline(line, SIZE)) > 0)
        {   
          reverse(line, enil, len);
          printf("reverse line: %s", enil); 
          //copy(longest, line);                 
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
                   //line      //enil     //len
void reverse(char orig[], char rev[], int length) 
{
  int a;
  int i;
  
  //to skip the '\n' and '\0'
  for(a=(length-1); a>=0 && (orig[a] == '\0' || orig[a] == '\n'); --a)
    ;
  
  for(i=0;a>=0;++i)
    {
      rev[i] =orig[a];
      --a;    
    }
  
  rev[i] = '\n';
  rev[++i] = '\0';
  
}


/*void copy(char to[], char from[])
{
 int i;

 i = 0;
 while((to[i] = from[i]) != '\0')
    ++i;

}
*/
