#include <stdio.h>
#define MAXLINE 100

/* Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.) */


int any(char ref_arr[], char mod_arr[]);
void mgetline(char array[], int maxline);

int main()
{
  //unsigned int n = 0;
  printf("reference arr, modified arr\n");
  char ref_arr[MAXLINE];
  char mod_arr[MAXLINE];

  mgetline(mod_arr, MAXLINE); // it has '\0' as ending
  mgetline(ref_arr, MAXLINE);  // it has '\0' as ending
  printf("Position at array: %d", any(ref_arr, mod_arr));
  
}

void mgetline(char array[], int lim)
{
  int c,i;
             //if space in array is sufficient 
     for(i=0; i<lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
        {  array[i]=c; }
  
  
     array[++i] = '\0';
  

}

int any(char ref_arr[], char mod_arr[])
{
  int i,j;
  unsigned int n = 0;

  for(j=0; ref_arr[j]!='\0'; j++)
    {
      for(i=0; mod_arr[i]!='\0'; i++)
        {
            if(ref_arr[j] == mod_arr[i])
              {  
                n = i;
                return n;  
              }                  
        }
    }
    n = -1;
    return n;   

}


