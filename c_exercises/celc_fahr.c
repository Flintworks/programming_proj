#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

int main()
{

//declaration: properties of variables: type(int) name(fahr) list(fahr, celsius)
 float fahr, celsius;
 float lower, upper, step;

//assignment statements
 lower = 0;
 upper = 300;
 step = 20;

 fahr = lower;
 printf("farenheit\tcelsius\n");
 while( fahr <= upper)
    {   
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%15.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
