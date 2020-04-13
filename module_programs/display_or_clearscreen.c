#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#define MAXLINE 100


void display2();
//void display();
void clear();




void main()
{

  int ch;

  while(1)
  {
    printf("Choose options\n");
    printf("1 - display input to screen\n");
    printf("2 - clear the screen\n");
    printf("3 - Exit the program\n");
    scanf("%d", &ch);

    switch(ch) 
	{
		case 1: display2();
			break;		
		case 2: clear();
			break;
		case 3: exit(0);
			break;
		default: printf("wrong choice\n");		
	}

  }
}

/*void display()
{
  int i,c;
  char line[100];   
 
  printf("Enter you want to display\n");
  for(i=0;i<100-1 && (c=getchar())!=EOF && c!='\n'; i++)
     {line[i] = c;}

  if(c == '\n')
    { 
	line[i++] = c;
        line[i] = '\0';
    }     
  
  printf("Output: %s\n", line);
}
*/

void clear()
{
  system("clear");

}


void display2()
{
  int c;
  char string[20];

  printf("Enter Input:\n");
  scanf("%s", &string);
  printf("ouput: %s\n", string);
  
  

}
