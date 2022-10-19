#include <iostream>

using namespace std;

int main()
{
    
    
 int hold;
 int array[5];

 cout<<"Enter 5 numbers: "<<endl;

 for(int i=0; i<5; i++) 
 { 
  cin>>array[i];
 }

 cout<<endl;
 cout<<"Orignally entered array by the user is: "<<endl;

 for(int j=0; j<5; j++)
 {
  cout<<array[j];
  cout<<endl;
 }

 cout<<endl;

 for(int i=0; i<4; i++)
 {
  for(int j=0; j<4; j++) 
  {
   if(array[j]>array[j+1])
   {
    hold=array[j];
    array[j]=array[j+1];
    array[j+1]=hold;
   }
  }
 }

 cout<<"Sorted Array is: "<<endl;

 for(int i=0; i<5; i++)
 {
  cout<<array[i]<<endl;
 }
    

    return 0;
 }
