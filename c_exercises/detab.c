#include <stdio.h>
#define MAXLINE 40 
#define COL_LIMIT 5

void detab(char charline[], char detab_line[]);
int gtline(char line[], int maxline);


int main()
{
int len;
char line[MAXLINE];
char detab_line[MAXLINE];

while(len = gtline(line, MAXLINE)) // check if line is not empty
    {
       if(len > 0)
            {
                detab(line, detab_line); 
            }     

     printf("detab version: %s", detab_line);

    }   

}



int gtline(char line[], int max)
{
  int charcount;
  int element;
 
  for(charcount = 0; charcount<=(max-1) && (element=getchar()) && element !='\n'; ++charcount)
     {
        line[charcount] = element;

     }
  
  if(element == '\n')
    {
       line[charcount] = element;
       ++charcount;

    } 

   line[charcount] = '\0';
  
   return charcount; 
  
}


void detab( char charline[], char detab_line[])
{
  int elementcount;
  int detabcounter = 0;
  int spacecounter = 0;
  int i = 0;
  
  for(elementcount=0;charline[elementcount] !='\n';++elementcount)
    {
        if(charline[elementcount] == ' ' || charline[elementcount] == '\t')
            {++spacecounter;}           

        if(charline[elementcount] == '\t' && spacecounter > 3)
          {  
            //delete current tab
             while (i<=4)
              {   
                detab_line[detabcounter++] = ' '; 
                ++i;
              }
            
              
          }
       else if (charline[elementcount] == '\t' && spacecounter < 3)    
          {
            charline[elementcount] = ' '; //1 blank spaces 
            detab_line[detabcounter++] = charline[elementcount];

          }  
       else
          {
            detab_line[detabcounter++] = charline[elementcount];

          }   
        
    }
    
    detab_line[detabcounter] = '\n';
    ++detabcounter;
    detab_line[detabcounter] = '\0';       

   
}
