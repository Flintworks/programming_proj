#include <stdio.h>

int tempconvert(float lower, float upper, int step);

int main()
{
  float start, end;
  int interval; 
  
  printf("Enter start, finish and interval to convert to celsius:\n");
  scanf("%f %f %d", &start, &end, &interval);

  tempconvert(start,end,interval);

  
}

int tempconvert(float lower, float upper, int step)
{
  float fahr=lower, celsius=0;
  printf("\nfarenheit\tcelsius\n");
  while( fahr <= upper)
    { 
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%15.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
   return 0;
}


