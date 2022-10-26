//use of malloc             *** print value by user ***
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter the size of the array you want to create :  ");
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));                  // malloc 
    for(int i=0; i<n; i++)
    {
        printf(" \n Enter the value no %d of this array :  ", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++)
    {
        printf("\n The value at %d of this array is %d", i+1, ptr[i]);
    }
return 0;
}
