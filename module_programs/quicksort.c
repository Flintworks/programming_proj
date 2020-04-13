#include <stdio.h>

// quicksort recursion, a sorting algorithm. Given an array, one element is chosen and the others are partitioned into two subsets--those less than the partition element  and thosegreater than or equal to it. The same process is then applied recursively to the two subsets. When a subset has fewer than two elements, it doesnt need any sorting; this stops the recursion.

// we use the middle element of each subarray for partitioning

void qsort( int v[], int l, int r); //function prototype
void swap (int v[], int i, int j);  //fuction prototype

int main(){

int v[]={3,9,1,2,7,4,8};
int left =0;
int right =7;

qsort(v,left,right); //called the function qsort

int x=0;

while(x<=right)
    {
      printf("\n%d", v[x]);
      x++;  
    }

}


/*qsort: sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right)
{
    int i, last;
   // void swap(int v[], int i, int j);

    if (left >= right)  /* do nothing if array contains */
        return;         /* fewer than two elements */
    swap(v, left , (left + right)/2); /* move partition elem */
    last = left;
    for (i = left+1; i <= right; i++)  /* partition run through the end of the array (last element) not just in the mid array */
        if (v[i] < v[left])  //at first, v[1] < v[0]. if true then swap. then v[{1,2,3,4,5,6,7}] < v[0]; 
            swap(v, ++last, i); // v[0] will not change becaue ++last and last=0
    swap(v, left, last);    /* restore partition elem */
    qsort(v, left, last-1);
    qsort(v, last+1, right);

}


/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{

    int temp;
    
   // printf("j=%d", j);

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;

}
