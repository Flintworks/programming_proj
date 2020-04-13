#include <stdio.h>
#define MAXCOL 5
#define MAXLEN 40
#define IN 1
#define OUT 0

int gtline( char arrayorig[], int maxline);
void entab (char arrayorig[], char arrayentab[]);


int main()
{
  
    int len;  // length of array
    char arrayorig[MAXLEN];
    char arrayentab[MAXLEN];

        while(len = gtline(arrayorig, MAXLEN))
        { 
            if (len > 0)
              {
                 entab(arrayorig, arrayentab);               
              }
          
           printf("entab version: %s", arrayentab); 

        }  
  


}


int gtline(char arrayorig[], int num)
{
  int counter;
  int val;
  
  for(counter=0;counter<=(num-1) && (val=getchar()) && val !='\n'; ++counter) 
   {
          arrayorig[counter] = val;
      

   } 

  if(val == '\n')
    {
        arrayorig[counter] = val;
        ++counter;
    }

  arrayorig[counter] = '\0'; 
  return counter;
}


void entab(char arrayorig[], char arrayentab[])
{
  
  int counter;
  int entabc=0;
  int blankcounter=0;
  int colcounter=0;
  int state;

  for(counter=0;arrayorig[counter] !='\n';++counter)
      {
         if(arrayorig[counter] == ' ' && state == IN)
            {
              blankcounter +=1;
              state = OUT;
              ++colcounter;
               
            }   
         else if(arrayorig[counter] == ' ' && state == OUT)
            {
               blankcounter +=1;
               if(blankcounter == 3 && colcounter == 3) 
                 {
                   arrayentab[entabc++] = '\t';
                   arrayentab[entabc++] = '\t';
                   blankcounter = 0;
                      
                 }   

            }
        else
            {
             if(blankcounter != 0 && state == OUT)
                {
                  arrayentab[entabc++] = ' ';  
                }
             state = IN;
             blankcounter = 0;
             arrayentab[entabc++] = arrayorig[counter];
            } 
   
      }     
    arrayentab[entabc++] = '\n';
    arrayentab[entabc] = '\0';


}
