#include <stdio.h>

int main()
{
 int c=0, i, nalpha[26], ndigit[10];
 
 //alpha
for(i=0;i<26;++i)
    nalpha[i] = 0;

//digit
for(i=0;i<10;++i)
    ndigit[i]=0;

while((c=getchar()) != EOF)
  {
    if(c >= '0' && c <= '9')
        ++ndigit[c-'0'];

   else if(c >= 'a' && c <= 'z')
        ++nalpha[c-'a'];
     
  }  
   

//alpha
 for(i=0; i<26; ++i)
 {   
    printf("%c = %d ", ('a'+i), nalpha[i]);
   
 }
 printf("\n");
//digit
 for(i=0; i<=10; ++i)
 {
   printf("%d = %i ", i, ndigit[i]);   
 }
 printf("\n");

}
