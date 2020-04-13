#include <stdio.h>

#define MAXLINE 100

/* rudimentary calculator */
int main()
{

    double sum, atof(char []); //function prototype
    char line[MAXLINE];
    int gtline(char line[], int max);

    sum=0;
    while (gtline(line, MAXLINE) >0)
      {
        printf("Im out of time\n");
        printf("\t%g\n", sum += atof(line));
      }
    return 0;
}

