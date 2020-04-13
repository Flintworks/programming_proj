#include <stdio.h>
#define MAXLINE 100



/*Exercise: 2.4: Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
*/

//function definition
void squeeze_alt(char arr1[] ,char arr2[]);
void mgetline( char line[], int maxline);
//void transfer_arr(char ar1[], char ar3[]);

int main(void)
{
 char arr1[MAXLINE]; //modify by deleting match characters found in s2 
 char arr2[MAXLINE]; //reference

 mgetline(arr1, MAXLINE);
 mgetline(arr2, MAXLINE);
 squeeze_alt(arr1, arr2); 


//printf("\n s1:%s, s2:%s", s1, s2); 

printf("final output %s", arr1);

 return 0;

}

void mgetline(char array[], int lim)
 {
   int c,i;
            //if space in array is sufficient 
   for(i=0; i<lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
      {  array[i]=c; }
        
   /*if(c=='\n')
    {
      array[i++] = c; 
    }*/

  array[++i] = '\0';
 }    


void squeeze_alt(char arr1[], char arr2[]) //arr1=bernerd, arr2=geli
{
  int i,j;
  int x;
  int n;
  char arr3[MAXLINE];

  for(i=0;arr2[i]!='\0';i++) //geli
    {
        for(j=n=0;arr1[j]!='\0';j++) //bernerd
            { ;
               if(arr2[i]!=arr1[j]) 
                    { arr3[n++]=arr1[j]; } 
            }
            arr3[n] = '\0';
            for(x=0;(arr1[x]=arr3[x])!='\0';x++)
                {
                  ;     
                }
            //transfer_arr(arr1, arr3);
    }
}

/*void transfer_arr(char arr1[], char arr3[])
{
  int x;
  for(x=0;(arr1[x]=arr3[x])!='\0';x++)
   {
        ;
   }     
   //arr1[x] = '\0';
}*/
