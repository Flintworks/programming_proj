#include <stdio.h>
#define SIZE 1000

int gtline(char line[], int length);
void copy( char to[], char from[], int lenga); 

int main()
{
  int len, max=20;
  int lineentry=0;
  char line[SIZE];
  char longest[SIZE];
  
  while((len = gtline(line, SIZE)) > 0)
    if( len >= max)
        {   
           ++lineentry; 
          copy(longest, line, len);                 
        }

 if (lineentry > 0)
  {
  printf("Number of entries %d:%s", lineentry, longest);
  }
 return 0; 

}

int gtline(char s[], int lim)
{
  int t,i;
  for(i=0;i<lim-1 && (t = getchar()) != '\n' && t != EOF; ++i)
     {
        //s[i] = t; 
         if(i == 0 && t == ' ')
            {
              ;
            }   
         else
           { s[i] = t;}    
          
     }
  if(t == '\n')
     {
        s[i] = t;
        //++i;       
     }
  //s[i] = '\0';

  return i; 
}

void copy(char to[], char from[], int lenga)
{
 //static int i;
 int i = 0;
 static int j = 0;
 
 for(i=0;i<=(lenga-1);++i)
     {
      if(i == (lenga-2))
        {
            if(from[lenga-2] == ' ' || from[lenga-2] == '\t')
               {
                 ;           
               }
            else
               {
                  if(from[i] != '\n')
                    {  
                        to[j] = from[i];
                        
                    }
                  else
                    {
                        break;
                    }  
   
               }
        }
      else
         {
            if( from[i] != '\n')
                {  
                   to[j] = from[i];
                   ++j;  

                }    
            else
                { 
                   break;
                }
         }   
  
     }

    /*while((to[i] = from[n]) != '\n')
    {
      ++i;
      ++n;
    }
    to[++i] = '\n';*/


    to[j] = '\n';
   
}
