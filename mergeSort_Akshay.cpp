#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = 0;

    int merged_array[end-start+1];

    while (i<=mid && j<=end)
    {
        if(arr[i] < arr[j])
            merged_array[k++] = arr[i++];
        else    
            merged_array[k++] = arr[j++];
    }

    while (i <= mid)
    {
        merged_array[k++] = arr[i++];
    }

    while (j <= end)
    {
        merged_array[k++] = arr[j++];
    }

    int size = sizeof(merged_array)/sizeof(int);

    for(int i=0,j=start;i<size;i++,j++)
        arr[j] = merged_array[i];
    
}

void mergesort(int arr[], int start, int end)
{
    if(end <= start)
        return;
    
    int mid = start + (end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}



int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};

    int size = sizeof(arr)/sizeof(int);

    cout<<"Unsorted Array: ";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    mergesort(arr,0,size-1);

    cout<<"\nSorted Array: ";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}