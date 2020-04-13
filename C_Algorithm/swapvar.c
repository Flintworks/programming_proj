#include <stdio.h>
// swap two numbers without using a third temp variable.
int main()
{
int a,b;
printf("Enter two numbers:\n");
scanf("%d%d", &a, &b);

a = a + b;
b = a - b;
a = a - b; 

printf("Swap numbers: %d %d \n", a, b);
}
