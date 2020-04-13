#include <stdio.h>


int main()
{
  char line[50] ="i wish my name i wish my";
  char pattern[20] ="wish";

  int i,j,k;
  int latestright=0;
  
  for(i=0; line[i]!='\0'; i++){
    for(j=i,k=0;pattern[k]!='\0' && line[j]==pattern[k];j++,k++)
 	   {;}
	if(k > 0 && pattern[k]=='\0')
	   { latestright = i;}	

  }
  if(i>=0)
  	printf("right most pattern starts in index %d\n", latestright);
  else
  	printf("no pattern exist\n");
} 
