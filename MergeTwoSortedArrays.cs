using System;

class Hacktober
{
	public static void merge_arrays(int[] arr1, int[] arr2, int n1, int n2, int[] arr3) {
		int i = 0, j = 0, k = 0;
		while (i < n1 && j < n2) {
			if (arr1[i] < arr2[j]) arr3[k++] = arr1[i++];
			else arr3[k++] = arr2[j++];
		}
		while (i < n1) arr3[k++] = arr1[i++];
		while (j < n2) arr3[k++] = arr2[j++];
	}
	
	public static void Main() {
		int[] arr1 = {9,12,15,18},arr2 = {1,3,6,10,14};
		int length1 = arr1.Length,length2 = arr2.Length;
		int[] arr3 = new int[length1+length2];
		merge_arrays(arr1, arr2, length1, length2, arr3);
		Console.Write("after merging : ");
		for (int i = 0; i < length1 + length2; i++)
			Console.Write(arr3[i] + " ");
	}
}
