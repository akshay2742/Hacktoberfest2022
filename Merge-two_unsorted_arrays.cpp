#include <iostream>
#include <algorithm>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;
void mergeAndSort(int *arr1, int n1, int *arr2, int n2, int *result)
{
   merge(arr1, arr1 + n1, arr2, arr2 + n2, result);
   sort(result, result + n1 + n2);
}

void displayArray(int *arr, int n)
{
   for (int i = 0; i < n; ++i) 
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}
int main(){
   int arr1[] = {10, 5, 7, 2};
   int arr2[] = {4, 17, 9, 3};
   int result[SIZE(arr1) + SIZE(arr2)];
   displayArray(arr1, SIZE(arr1));
   displayArray(arr1, SIZE(arr2));
   mergeAndSort(arr1, SIZE(arr1), arr2, SIZE(arr2), result);
   displayArray(result, SIZE(arr1) + SIZE(arr2));
   return 0;
}
