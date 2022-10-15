#include <stdio.h>

int main() 
{
  int s1,s2,s3;
  printf("\n Enter the size of 1st array  ");
  scanf("%d",&s1);
  printf("\n Enter the size of 2nd array ");
  scanf("%d",&s2);

  s3=s1+s2;
  int i,j;
  int arr1[s1],arr2[s2],arr3[s3];
  for(i=0;i<s1;i++) 
  {
    scanf("%d",&arr1[i]);
    arr3[i]=arr1[i];
  }
  int k=s1;
  for (j=0;j<s2;j++) 
  {
    scanf("%d",&arr2[j]);
    arr3[k]=arr2[j];
    k++;
  }
  printf("\n The merged array after sorting\n\t");
  int l,m;
  for(l=0;l<s3;l++)
  {
    int temp;
    for(m=l+1;m<s3;m++) 
	{
      if (arr3[l]>arr3[m]) 
	  {
        temp=arr3[l];
        arr3[l]=arr3[m];
        arr3[m]=temp;
      }
    }
  }
int n;
  for(n=0;n<s3;n++)
  {
    printf("%d",arr3[n]);
  }
}
