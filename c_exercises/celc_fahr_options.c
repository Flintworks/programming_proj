#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

int main()
{

//declaration: properties of variables: type(int) name(fahr) list(fahr, celsius)
 float fahr, celsius;
 float lower, upper, step;

//assignment statements
/* lower = 0;
 upper = 300;
 step = 20;
*/

printf("\nto create a table you must specify the boundaries of the table by specifying its bottom and upper limit number. You must also specify the number of intervals of the next number until it reach the upper limit\n");

printf("\nenter starting number of farenheit:  ");
scanf("%f", &lower);
printf("enter end number of farenheit:  ");
scanf("%f", &upper);
printf("Enter intervals of each consecutive numbers:");
scanf("%f", &step);


 fahr = lower;
 printf("\nfarenheit\tcelsius\n");
 while( fahr <= upper)
    {   
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%15.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
