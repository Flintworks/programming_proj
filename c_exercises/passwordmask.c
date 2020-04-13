
#include <stdio.h>
#include <curses.h>
#include <ncurses.h>


int main(int argc, char **argv)

{
	/*mask the input by asterisk*/
	
    initscr();

	char psswd[25]; //this where you will transfer the password from getchar
	int i=0;
	//int ch;
	
	char ch=0;
	
	printf("Enter Password\n");
	
	while(1) //forever loop
	{
		if(i<0)
		{i=0;}
		
        noecho(); 
		ch=getch();
		
		if(ch==10) //13 is ascii for enter/carriage return
		 {break;}	 
		 	 
		/*if(ch==8) //8 is backspace
		  {
			  putchar('\b');
			  
			  --i;
			  continue;
		  }*/
		  
		  psswd[i++]=ch;
		  ch='*';
		  putchar(ch);
	  }
		  	  
	  psswd[i] = '\0';
	  printf("\n\n%s", psswd);		  
		 
    //endwin();		
	return 0;		 
		 	 
	}	 
	
	
	
	
	



