//Inplace merging of two sorted arrays
#include<stdio.h>
int main()
{
    int a1,m,n,b1;
    scanf("%d",&a1);
    scanf("%d",&b1);
    int a[a1];
    int b[b1];
    scanf("%d",&m);
    scanf("%d",&n);
    int i,j=0,k;
    for(i=0;i<a1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=m;i<a1;i++)
    {
        a[i]=b[j];
        j++;
    }
    for(i=1;i<a1;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
             a[j + 1] = a[j];
             j = j - 1;
        }
        a[j + 1] = k;
    }
    for(i=0;i<m+n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
