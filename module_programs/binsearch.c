#include <stdio.h>

/*To illustrate a three-way decision, here is a binary search function that decides if a particular value x occurs in the sorted array v. The elements of v must be in increasing order. The function returns the position(a number between 0 and n-1) if x occurs in v,  and -1 if not. Binary search first compares the input value x to the middle element of the array v. If x is less than the middle value, searching focuses on the lower half of the table, otherwise on the upperhalf. In either case, the next step is to compare x to the middle element of the selected half. This process of dividing the range in two continues until the value is found or the range is empty */

/*binsearch: find x in v[0]<=v[1]<=...<=v[n-1]*/
int main()
{
  int x, i, low, mid, n, g;
  low = 0;
 
  printf("Enter value of x \n");
  scanf("%d", &x);

  printf("Enter value of high:");
  scanf("%d", &n);

  int high = n-1;
  int v[high];

  printf("Enter values of array v in asc order\n");
  for(i=0; i<=high; i++)
    {
    printf("Enter value of %d: ", i);
    scanf("%d", &v[i]);
    }   


  while(low <= high) // everytime loops the midpoint always gets half
       {
        mid = (low+high)/2;
        printf("value of mid %d\n", mid);

        if (x < v[mid])
           {printf("test1\n");
            high = mid-1;}
        else if (x > v[mid])
            {printf("test2 x is %d, v is %d\n", x, v[mid]);
             printf("low = %d, high = %d", low, high);
             low = mid+1;}
        else  
            {
            printf("Found match mid");
            break; 
            }
       }

}

