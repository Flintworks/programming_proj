#include <stdio.h>

int main() {
int x,y;
printf("Enter first value:\n");
scanf("%d", &x);

printf("Enter second value:\n");
scanf("%d", &y);

printf("First value and second value will now exhange!\n");

x=x+y;
y=x-y;
x=x-y;

printf("Value of first is %d, and value of second is %d. They are now exchanged!", x,y);
}



