#include <stdio.h>

int fibo(int x);

int main()
{

int i;
printf("Please Enter input for Fibonacci \n");
scanf("%d", &i);

printf("Fibonacci sequence of %d  \n", i);
fibo(i);

}

int fibo( int x)
{
 
 int a = 0;
 int b = 1; 
 int c;
 int z; 
 printf("%d ", a);
 printf("%d ", b); 
 for(z=x;z>0;z--)
   { 
     c = b;
     b = a+b;
     a = c;
     printf("%d ", b); 
   }  
  return 0;
}


