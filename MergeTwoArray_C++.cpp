#include <stdio.h>
#include <iostream>
using namespace std;

int main() 
{
  int s1,s2,s3;
  cout<<"Enter the size of 1st array"<<endl;
  cin>>s1;
  cout<<"Enter the size of 2nd array"<<endl;
  cin>>s2;

  s3=s1+s2;
  int arr1[s1],arr2[s2],arr3[s3];
  for(int i=0;i<s1;i++) 
  {
    cin>>arr1[i];
    arr3[i]=arr1[i];
  }
  int k=s1;
  for (int i=0;i<s2;i++) 
  {
    cin>>arr2[i];
    arr3[k]=arr2[i];
    k++;
  }
  cout<<"The merged array after sorting\t"<<endl;
  for(int i =0;i<s3;i++)
  {
    int temp;
    for(int j=i+1;j<s3;j++) 
	{
      if (arr3[i]>arr3[j]) 
	  {
        temp=arr3[i];
        arr3[i]=arr3[j];
        arr3[j]=temp;
      }
    }
  }

  for(int i=0;i<s3;i++)
  {
    cout<<arr3[i];
  }
}
