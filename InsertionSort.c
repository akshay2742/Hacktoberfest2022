#include<stdio.h>
#include<conio.h>
void input(int a[5],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}

void output(int a[5],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("the element %d is = %d\n",i,a[i]);
	}
}

void insertion_sort(int a[5],int n)
{
    int i,j,temp=0;
    // for(i=1; i<n; i++)
    // {
    //     temp=a[i];
    //     j=i-1;
    //     while (j>=0 && a[j]> temp)
    //     {
    //         a[j+1]=a[j];
    //         j--;
    //     }
    //     a[j+1]=temp;
    // }
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j=j-1;
		}
	}
}
int main()
{
	int a[5],n;
	printf("size of array element\n");
	scanf("%d",&n);
	printf("enter array's element\n");
	input(a,n);
    insertion_sort(a,n);
	output(a,n);
	return 0;
}
