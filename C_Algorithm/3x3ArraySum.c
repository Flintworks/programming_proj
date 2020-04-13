#include <stdio.h>
//3x3 array summation of all elements vertical and horizontally.

int main()
{
  int arr[3][3]; 
  int r;
  int c;
  int totcol0 = 0;
  int totcol1 = 0;
  int totcol2 = 0;
  
  int totrow0 = 0;
  int totrow1 = 0;
  int totrow2 = 0;


 r=0; 
 printf("Input number for first row\n");
   for(c=0;c<3;c++){
      scanf("%d", &arr[r][c]);
      }
   
   r = r + 1;
  
 printf("Input number for second row\n");
   for(c=0;c<3;c++){
      scanf("%d", &arr[r][c]);
   }
   r = r + 1;

 printf("Input number for 3rd row\n");
   for(c=0;c<3;c++){
      scanf("%d", &arr[r][c]);
   }



/* OUTPUT */
 printf("\n");
 r=0;
   for(c=0;c<3;c++){
      totrow0 += arr[r][c];
      if(c == 2)
        printf("%d = %d\n", arr[r][c], totrow0);
      else
        printf("%d ", arr[r][c]);
      }
  r = r + 1;

   for(c=0;c<3;c++){
      totrow1 += arr[r][c];
      if(c == 2)
        printf("%d = %d\n", arr[r][c], totrow1);
      else
        printf("%d ", arr[r][c]);
   }
  r = r + 1;

   for(c=0;c<3;c++){
      totrow2 += arr[r][c];
      if(c == 2)
        printf("%d = %d\n", arr[r][c], totrow2);
      else
        printf("%d ", arr[r][c]);
      
   }

 
   r = 0;
   c = 0;
   printf("------------------\n");
   for(r=0;r<3;r++){
      totcol0 += arr[r][c];  
   }
   printf("%d ", totcol0);
   c += 1;
   for(r=0;r<3;r++){
      totcol1 += arr[r][c]; 
   }
   printf("%d ", totcol1);

   c += 1;
   for(r=0;r<3;r++){
      totcol2 += arr[r][c]; 
   }
   printf("%d ", totcol2);
 


}
